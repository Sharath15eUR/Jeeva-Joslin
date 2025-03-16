# Module - 5 Assignment

## 1) Capture and analyze ARP packets using Wireshark. Inspect the ARP request and reply frames, and discuss the role of the sender's IP and MAC address in these packets. 

In an ARP request packet, the sender's IP and MAC addresses identify the device making the request, while the target IP address specifies the device it wants to communicate with. The sender's MAC address is included so that the target device knows where to send the ARP reply. In an ARP reply packet, the target device responds by providing its MAC address, mapping it to the requested IP. This exchange allows the sender to update its ARP table and establish direct communication at the data link layer. Without this, devices would be unable to resolve MAC addresses, preventing local network communication.

![Screenshot (284)](https://github.com/user-attachments/assets/81e3c3f4-c22d-4c71-8fe9-1d3df930e98f)

![Screenshot (288)](https://github.com/user-attachments/assets/f4f6c19c-2804-48cb-a325-7072811a090d)



![Screenshot (289)](https://github.com/user-attachments/assets/a857d157-6218-4ef3-b162-589e80665645)

![Screenshot (290)](https://github.com/user-attachments/assets/e3b3f741-b938-4cbc-9d60-a448a96010d0)
![Screenshot (291)](https://github.com/user-attachments/assets/265e8a4e-95ab-4f0a-8bf3-8501e432bcb1)
![Screenshot (292)](https://github.com/user-attachments/assets/ee0f197d-0783-427c-a6f7-13a0a469577a)


## 2) Using Packet Tracer, simulate an ARP spoofing attack. Analyze the behavior of devices on the network when they receive a malicious ARP response. 


I modified PC2’s MAC address to match the Router’s MAC address, making PC2 act as the router. Now, when PC1 (192.168.1.20) tries to communicate with 192.168.1.1, it unknowingly sends data to PC2 instead. I checked arp -a on PC1, and it now shows PC2’s MAC address for 192.168.1.1 instead of the router’s. 


![Screenshot (293)](https://github.com/user-attachments/assets/e67b45f3-13e4-4d36-ba30-7518fa365cb9)

![Screenshot (294)](https://github.com/user-attachments/assets/490192b9-258d-4204-8e9e-26019d314c28)

![Screenshot (295)](https://github.com/user-attachments/assets/8afe731a-4699-489c-861f-84e2fd565710)

![Screenshot (296)](https://github.com/user-attachments/assets/1314f18b-4c85-4d98-93f0-5a15f4f488a9)

![Screenshot (297)](https://github.com/user-attachments/assets/e650f4a7-5e36-4739-a08d-2f41f00180f1)







