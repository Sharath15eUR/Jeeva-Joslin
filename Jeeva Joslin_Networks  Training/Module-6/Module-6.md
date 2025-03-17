# Module - 6 Assignment

## 1)Capture and analyze ARP packets using Wireshark. Inspect the ARP request and reply frames when your device attempts to find the router's MAC address. Discuss the importance of ARP in packet forwarding.

![Screenshot (308)](https://github.com/user-attachments/assets/a56697c2-c14b-4d42-b93b-4e1a68dca738)

![Screenshot (309)](https://github.com/user-attachments/assets/4edb7914-2a45-42e2-b237-e942d882be91)

## 2)Manually configure static routes on a router to direct packets to different subnets. Use the ip route command and verify connectivity using ping and traceroute. 



![Screenshot (312)](https://github.com/user-attachments/assets/cedc6cec-9267-439b-ba56-2c9e34104439)

## 3)Given a network address of 10.0.0.0/24, divide it into 4 equal subnets. Calculate the new subnet mask. Determine the valid host range for each subnet. Assign IP addresses to devices in Packet Tracer and verify connectivity.

To divide the 10.0.0.0/24 network into 4 equal subnets, we borrow 2 bits from the host portion, giving a new subnet mask of /26 (255.255.255.192). The four subnets are:

10.0.0.0/26 (Hosts: 10.0.0.1 - 10.0.0.62, Broadcast: 10.0.0.63)
10.0.0.64/26 (Hosts: 10.0.0.65 - 10.0.0.126, Broadcast: 10.0.0.127)
10.0.0.128/26 (Hosts: 10.0.0.129 - 10.0.0.190, Broadcast: 10.0.0.191)
10.0.0.192/26 (Hosts: 10.0.0.193 - 10.0.0.254, Broadcast: 10.0.0.255)



## 4)You are given three IP addresses: 192.168.10.5, 172.20.15.1, and 8.8.8.8. Identify the class of each IP address. Determine if it is private or public. Explain how NAT would handle a private IP when accessing the internet.

The IP address 192.168.10.5 belongs to Class C (192.0.0.0 - 223.255.255.255) and is private, as it falls within the 192.168.0.0 - 192.168.255.255 range. The IP 172.20.15.1 is Class B (128.0.0.0 - 191.255.255.255) and is also private since it lies within the 172.16.0.0 - 172.31.255.255 range. The IP 8.8.8.8 is Class A (1.0.0.0 - 126.0.0.0) and is public, as it does not belong to any reserved private IP ranges. When a private IP (e.g., 192.168.10.5 or 172.20.15.1) accesses the internet, NAT (Network Address Translation) on a router or firewall translates the private IP into a public IP assigned by an ISP. 


## 5) In Cisco Packet Tracer, configure NAT on a router to allow internal devices (192.168.1.x) to access the internet. Test connectivity by pinging an external public IP.

![Screenshot (315)](https://github.com/user-attachments/assets/a1e7719d-1b80-4ea7-aad2-3f30956d28a1)


![Screenshot 2025-03-17 153121](https://github.com/user-attachments/assets/805dc2d6-3a36-4d4f-a903-b71bef3fa8d3)

![Screenshot (316)](https://github.com/user-attachments/assets/4ebeeb09-836e-484a-bb2d-746285793c6a)





