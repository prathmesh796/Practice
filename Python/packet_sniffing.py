from scapy.all import sniff
import time

def packet_callback(packet):
    # Print the packet summary
    print(packet.show())

for i in range(5):
    # Sniff packets for 10 seconds
    print(f"Sniffing for 10 seconds... (iteration {i+1})")
    sniff(prn=packet_callback, timeout=10)
    time.sleep(1)  # Sleep for 1 second between iterations