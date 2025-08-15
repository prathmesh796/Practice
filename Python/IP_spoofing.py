from scapy.all import *

# Spoofed source IP address (e.g., simulating a fake attacker)
spoofed_src_ip = "10.0.0.123"

# Target machine (must be in your test network)
target_ip = "10.0.0.5"
target_port = 80  # HTTP port for example

# Create IP and TCP headers
ip = IP(src=spoofed_src_ip, dst=target_ip)
tcp = TCP(sport=RandShort(), dport=target_port, flags="S")  # SYN packet

# Final packet
pkt = ip / tcp

# Send multiple spoofed packets
print(f"Sending spoofed packets to {target_ip} from {spoofed_src_ip}...")
send(pkt, count=10, inter=0.5)  # 10 packets, 0.5 sec delay
