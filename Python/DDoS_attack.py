import socket
import struct
from datetime import datetime as dt

# Use 'with' to ensure file is properly closed
with open("attack_DDoS.txt", "a") as file_txt:
    t1 = str(dt.now())
    file_txt.writelines(t1 + "\n")
    s = socket.socket(
        socket.PF_PACKET, socket.SOCK_RAW, socket.ntohs(0x0800)
    )  # g replaced with correct ETH_P_IP
    ip_count = {}
    No_of_IPs = 15
    R_No_of_IPs = No_of_IPs + 10
    while True:
        pkt = s.recvfrom(2048)
        ipheader = pkt[0][14:34]  # IP header starts after Ethernet header (14 bytes)
        ip_hdr = struct.unpack("!BBHHHBBH4s4s", ipheader)
        src_ip = socket.inet_ntoa(ip_hdr[8])
        print("The Source of the IP is:", src_ip)
        if src_ip in ip_count:
            ip_count[src_ip] += 1
        else:
            ip_count[src_ip] = 1
        print(f"Packet count from {src_ip}: {ip_count[src_ip]}")
        if No_of_IPs < ip_count[src_ip] < R_No_of_IPs:
            file_txt.writelines(f"DDOS attack is Detected from {src_ip}\n")
