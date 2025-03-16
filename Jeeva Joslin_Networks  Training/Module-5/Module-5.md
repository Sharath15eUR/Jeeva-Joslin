# Module -5 Assignment

## 1) Capture and analyze ARP packets using Wireshark. Inspect the ARP request and reply frames, and discuss the role of the sender's IP and MAC address in these packets. 

In an ARP request packet, the sender's IP and MAC addresses identify the device making the request, while the target IP address specifies the device it wants to communicate with. The sender's MAC address is included so that the target device knows where to send the ARP reply. In an ARP reply packet, the target device responds by providing its MAC address, mapping it to the requested IP. This exchange allows the sender to update its ARP table and establish direct communication at the data link layer. Without this, devices would be unable to resolve MAC addresses, preventing local network communication.

![Screenshot (284)](https://github.com/user-attachments/assets/81e3c3f4-c22d-4c71-8fe9-1d3df930e98f)

![Screenshot (288)](https://github.com/user-attachments/assets/f4f6c19c-2804-48cb-a325-7072811a090d)



![Screenshot (289)](https://github.com/user-attachments/assets/a857d157-6218-4ef3-b162-589e80665645)

![Screenshot (290)](https://github.com/user-attachments/assets/e3b3f741-b938-4cbc-9d60-a448a96010d0)
![Screenshot (291)](https://github.com/user-attachments/assets/265e8a4e-95ab-4f0a-8bf3-8501e432bcb1)
![Screenshot (292)](https://github.com/user-attachments/assets/ee0f197d-0783-427c-a6f7-13a0a469577a)


## 2) Using Packet Tracer, simulate an ARP spoofing attack. Analyze the behavior of devices on the network when they receive a malicious ARP response. 





