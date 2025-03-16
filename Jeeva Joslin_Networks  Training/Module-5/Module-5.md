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



## 3) Manually configure static IPs on the client devices(like Pc or your mobile phone) and verify connectivity using ping.

    jeeva@jeeva:~$ ifconfig
    enp0s3: flags=4163<UP,BROADCAST,RUNNING,MULTICAST>  mtu 1500
            inet 192.168.1.100  netmask 255.255.255.0  broadcast 192.168.1.255
            inet6 fe80::a00:27ff:fe46:c7e9  prefixlen 64  scopeid 0x20<link>
            ether 08:00:27:46:c7:e9  txqueuelen 1000  (Ethernet)
            RX packets 1  bytes 590 (590.0 B)
            RX errors 0  dropped 0  overruns 0  frame 0
            TX packets 92  bytes 10723 (10.7 KB)
            TX errors 0  dropped 0 overruns 0  carrier 0  collisions 0
    
    lo: flags=73<UP,LOOPBACK,RUNNING>  mtu 65536
            inet 127.0.0.1  netmask 255.0.0.0
            inet6 ::1  prefixlen 128  scopeid 0x10<host>
            loop  txqueuelen 1000  (Local Loopback)
            RX packets 128  bytes 13601 (13.6 KB)
            RX errors 0  dropped 0  overruns 0  frame 0
            TX packets 128  bytes 13601 (13.6 KB)
            TX errors 0  dropped 0 overruns 0  carrier 0  collisions 0
    
    jeeva@jeeva:~$ ip a
    1: lo: <LOOPBACK,UP,LOWER_UP> mtu 65536 qdisc noqueue state UNKNOWN group default qlen 1000
        link/loopback 00:00:00:00:00:00 brd 00:00:00:00:00:00
        inet 127.0.0.1/8 scope host lo
           valid_lft forever preferred_lft forever
        inet6 ::1/128 scope host noprefixroute 
           valid_lft forever preferred_lft forever
    2: enp0s3: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc fq_codel state UP group default qlen 1000
        link/ether 08:00:27:46:c7:e9 brd ff:ff:ff:ff:ff:ff
        inet 192.168.1.100/24 brd 192.168.1.255 scope global noprefixroute enp0s3
           valid_lft forever preferred_lft forever
        inet 10.0.2.15/24 brd 10.0.2.255 scope global dynamic noprefixroute enp0s3
           valid_lft 86363sec preferred_lft 86363sec
        inet6 fe80::a00:27ff:fe46:c7e9/64 scope link 
           valid_lft forever preferred_lft forever
    jeeva@jeeva:~$ sudo ipconfig enp0s3 192.168.1.20 netmask 255.255.255.0 up
    [sudo] password for jeeva: 
    sudo: ipconfig: command not found
    jeeva@jeeva:~$ sudo ifconfig enp0s3 192.168.1.20 netmask 255.255.255.0 up
    jeeva@jeeva:~$ ip a
    1: lo: <LOOPBACK,UP,LOWER_UP> mtu 65536 qdisc noqueue state UNKNOWN group default qlen 1000
        link/loopback 00:00:00:00:00:00 brd 00:00:00:00:00:00
        inet 127.0.0.1/8 scope host lo
           valid_lft forever preferred_lft forever
        inet6 ::1/128 scope host noprefixroute 
           valid_lft forever preferred_lft forever
    2: enp0s3: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc fq_codel state UP group default qlen 1000
        link/ether 08:00:27:46:c7:e9 brd ff:ff:ff:ff:ff:ff
        inet 10.0.2.15/24 brd 10.0.2.255 scope global dynamic noprefixroute enp0s3
           valid_lft 86216sec preferred_lft 86216sec
        inet 192.168.1.20/24 brd 192.168.1.255 scope global noprefixroute enp0s3
           valid_lft forever preferred_lft forever
        inet6 fe80::a00:27ff:fe46:c7e9/64 scope link 
           valid_lft forever preferred_lft forever
    jeeva@jeeva:~$ ifconfig
    enp0s3: flags=4163<UP,BROADCAST,RUNNING,MULTICAST>  mtu 1500
            inet 10.0.2.15  netmask 255.255.255.0  broadcast 10.0.2.255
            inet6 fe80::a00:27ff:fe46:c7e9  prefixlen 64  scopeid 0x20<link>
            ether 08:00:27:46:c7:e9  txqueuelen 1000  (Ethernet)
            RX packets 1  bytes 590 (590.0 B)
            RX errors 0  dropped 0  overruns 0  frame 0
            TX packets 246  bytes 21235 (21.2 KB)
            TX errors 0  dropped 0 overruns 0  carrier 0  collisions 0
    
    lo: flags=73<UP,LOOPBACK,RUNNING>  mtu 65536
            inet 127.0.0.1  netmask 255.0.0.0
            inet6 ::1  prefixlen 128  scopeid 0x10<host>
            loop  txqueuelen 1000  (Local Loopback)
            RX packets 272  bytes 28037 (28.0 KB)
            RX errors 0  dropped 0  overruns 0  frame 0
            TX packets 272  bytes 28037 (28.0 KB)
            TX errors 0  dropped 0 overruns 0  carrier 0  collisions 0
    
    jeeva@jeeva:~$ ping 192.168.1.20
    PING 192.168.1.20 (192.168.1.20) 56(84) bytes of data.
    64 bytes from 192.168.1.20: icmp_seq=1 ttl=64 time=0.050 ms
    64 bytes from 192.168.1.20: icmp_seq=2 ttl=64 time=0.044 ms
    64 bytes from 192.168.1.20: icmp_seq=3 ttl=64 time=0.030 ms
    64 bytes from 192.168.1.20: icmp_seq=4 ttl=64 time=0.031 ms
    64 bytes from 192.168.1.20: icmp_seq=5 ttl=64 time=0.026 ms
    ^C
    --- 192.168.1.20 ping statistics ---
    5 packets transmitted, 5 received, 0% packet loss, time 4012ms
    rtt min/avg/max/mdev = 0.026/0.036/0.050/0.009 ms
    jeeva@jeeva:~$ 


## 4) Use Wireshark to capture DHCP Discover, Offer, Request, and Acknowledge messages and explain the process. 


The DHCP process follows four steps called DORA: Discover, Offer, Request, and Acknowledge. When a device connects to a network, it first sends a DHCP Discover message to find a DHCP server. The server responds with a DHCP Offer, providing an available IP address. The device then sends a DHCP Request to confirm its selection of the offered IP. Finally, the server sends a DHCP Acknowledge, confirming the lease and assigning the IP to the device. 

![Screenshot (298)](https://github.com/user-attachments/assets/6a80fbfe-2d6c-47f5-a4cd-5c924c636a82)


![Screenshot (299)](https://github.com/user-attachments/assets/6f2ffef2-4a5e-47ff-b5b1-7d3caab3048a)


![Screenshot (300)](https://github.com/user-attachments/assets/ee565ccc-9f3c-467a-b265-cc34516d8169)


![Screenshot (301)](https://github.com/user-attachments/assets/6c5ae326-3095-417e-9ac2-fc36b44e4aa7)



## 5)Given an IP address range of 192.168.1.0/24, divide the network into 4 subnets. Task: Manually calculate the new subnet mask and the range of valid IP addresses for each subnet. Assign IP addresses from these subnets to devices in Cisco Packet Tracer and verify connectivity using ping between them.


The original /24 subnet (255.255.255.0) has 256 total addresses (0-255).
We need 4 subnets, so we borrow 2 bits from the host portion:

New Subnet Mask: /26 (255.255.255.192)
Each subnet has 64 addresses (2⁶ = 64).
Usable IPs per subnet: 62 (since 2 are reserved for network ID and broadcast).

Now, divide the network 192.168.1.0/24 into 4 subnets of /26:

Subnet	    Network ID	        Usable IP Range	                Broadcast Address
Subnet 1	192.168.1.0/26    	192.168.1.1 - 192.168.1.62	    192.168.1.63
Subnet 2	192.168.1.64/26	    192.168.1.65 - 192.168.1.126	192.168.1.127
Subnet 3	192.168.1.128/26	192.168.1.129 - 192.168.1.190	192.168.1.191
Subnet 4	192.168.1.192/26	192.168.1.193 - 192.168.1.254	192.168.1.255

Assign IPs in Cisco Packet Tracer
Assign IP addresses to devices in each subnet:

Subnet 1: PC1 → 192.168.1.10, PC2 → 192.168.1.20
Subnet 2: PC3 → 192.168.1.70, PC4 → 192.168.1.80
Subnet 3: PC5 → 192.168.1.130, PC6 → 192.168.1.140
Subnet 4: PC7 → 192.168.1.200, PC8 → 192.168.1.210
Set the subnet mask to 255.255.255.192 for all devices.

