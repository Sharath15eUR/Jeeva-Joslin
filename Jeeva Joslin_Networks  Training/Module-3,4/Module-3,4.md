
# Module 3 and 4 Assessment
## 1. Simulate a small network with switches and multiple devices. Use ping to generate traffic and observe the MAC address table of the switch. Capture packets using Wireshark to analyze Ethernet frames and MAC addressing.

 I used Cisco Packet Tracer to simulate a small network consisting of a 2960 series switch and three PCs. First, I added the switch and three end devices (PC-0, PC-1, and PC-2) and connected them using Copper Straight-Through cables. PC-0 was connected to FastEthernet0/1, PC-1 to FastEthernet0/2, and PC-2 to FastEthernet0/3 on the switch. Next, I configured static IP addresses for each PC: 192.168.1.10 for PC-0, 192.168.1.20 for PC-1, and 192.168.1.30 for PC-2, all with a subnet mask of 255.255.255.0. To test network connectivity, I used the ping command from PC-0 to PC-1 and PC-2, confirming successful communication. After that, I accessed the switch’s CLI (Command Line Interface) and used the show mac address-table command to observe the learned MAC addresses. To analyze Ethernet frames, I switched to Simulation Mode, enabled ICMP filtering, and sent pings between devices. I captured and inspected the packets to examine details like Source MAC Address, Destination MAC Address, Ethertype, and Payload. 


![Screenshot (261)](https://github.com/user-attachments/assets/1e133a9c-5f06-43ed-8001-1eaf47b64c67)

 
![Screenshot (262)](https://github.com/user-attachments/assets/fc47e938-5b19-4992-ad0a-7c8a518762dc)




![Screenshot (263)](https://github.com/user-attachments/assets/ad25b32c-0fe9-4a08-92cb-bcdf61bed346)



![Screenshot (264)](https://github.com/user-attachments/assets/25cb7682-49e3-4942-b2ad-59dd0fed7540)



![Screenshot (265)](https://github.com/user-attachments/assets/01a3a7f0-290e-4f29-8fe7-5bd6ce6fed41)



![Screenshot (266)](https://github.com/user-attachments/assets/2b8ab72d-013c-4cd7-a556-061917155ad7)




![Screenshot (267)](https://github.com/user-attachments/assets/afa9b408-200b-4015-87af-69ca3da16d62)



![Screenshot (268)](https://github.com/user-attachments/assets/d318db11-f27f-4148-9c59-45cf70e9125b)




![Screenshot (269)](https://github.com/user-attachments/assets/8b429311-3378-415c-bad8-99652c11c367)



![Screenshot (270)](https://github.com/user-attachments/assets/ad2b2a88-3afa-475e-879b-74fed839f04f)



![Screenshot (271)](https://github.com/user-attachments/assets/0bf29877-d41b-486a-ae5a-bb39107f36c5)



## 2.Capture and analyze Ethernet frames using Wireshark. Inspect the structure of the frame, including destination and source MAC addresses, Ethertype, payload, and FCS. Use GNS3 or Packet Tracer to simulate network traffic.

I used Wireshark to capture and analyze Ethernet frames while simulating network traffic in Cisco Packet Tracer. First, I created a small network with a switch (2960 series) and two PCs (PC-0 and PC-1) in Packet Tracer. I connected the devices using Copper Straight-Through cables and assigned static IP addresses: 192.168.1.10 for PC-0 and 192.168.1.20 for PC-1, both with a subnet mask of 255.255.255.0. I then used the ping command from PC-0 to PC-1 to generate ICMP traffic. To capture Ethernet frames, I switched to Simulation Mode in Packet Tracer, enabled ICMP filtering, and analyzed the packets.


## 3. Configure static IP addresses, modify MAC addresses, and verify network connectivity using ping and ifconfig commands.




    jeeva@jeeva:~$ sudo vi /etc/netplan/01-netcfg.yaml
    [sudo] password for jeeva: 
    jeeva@jeeva:~$ sudo netplan apply
    
    ** (generate:2855): WARNING **: 07:50:16.328: Permissions for /etc/netplan/01-netcfg.yaml are too open. Netplan configuration should NOT be accessible by others.
    
    ** (generate:2855): WARNING **: 07:50:16.331: `gateway4` has been deprecated, use default routes instead.
    See the 'Default routes' section of the documentation for more details.
    
    ** (process:2853): WARNING **: 07:50:17.536: Permissions for /etc/netplan/01-netcfg.yaml are too open. Netplan configuration should NOT be accessible by others.
    
    ** (process:2853): WARNING **: 07:50:17.540: `gateway4` has been deprecated, use default routes instead.
    See the 'Default routes' section of the documentation for more details.
    
    ** (process:2853): WARNING **: 07:50:18.044: Permissions for /etc/netplan/01-netcfg.yaml are too open. Netplan configuration should NOT be accessible by others.
    
    ** (process:2853): WARNING **: 07:50:18.049: `gateway4` has been deprecated, use default routes instead.
    See the 'Default routes' section of the documentation for more details.
    jeeva@jeeva:~$ ip a show enp0s3
    2: enp0s3: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc fq_codel state UP group default qlen 1000
        link/ether 08:00:27:46:c7:e9 brd ff:ff:ff:ff:ff:ff
        inet 192.168.1.100/24 brd 192.168.1.255 scope global noprefixroute enp0s3
           valid_lft forever preferred_lft forever
        inet 10.0.2.15/24 brd 10.0.2.255 scope global dynamic noprefixroute enp0s3
           valid_lft 86386sec preferred_lft 86386sec
        inet6 fe80::a00:27ff:fe46:c7e9/64 scope link 
           valid_lft forever preferred_lft forever
    jeeva@jeeva:~$ 
    
    jeeva@jeeva:~$ sudo cat /etc/netplan/01-netcfg.yaml
    network:
      ethernets:
        enp0s3:
          dhcp4: no
          addresses:
            - 192.168.1.100/24
          gateway4: 192.168.1.1
          nameservers:
            addresses:
              - 8.8.8.8
              - 8.8.4.4
      version: 2
    
    jeeva@jeeva:~$ sudo ip link set dev enp0s3 down
    jeeva@jeeva:~$ sudo ip link set dev enp0s3 address 00:1A:2B:3C:4D:5E
    jeeva@jeeva:~$ sudo ip link set dev enp0s3 up
    jeeva@jeeva:~$ ip link show enp0s3
    2: enp0s3: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc fq_codel state UP mode DEFAULT group default qlen 1000
        link/ether 00:1a:2b:3c:4d:5e brd ff:ff:ff:ff:ff:ff permaddr 08:00:27:46:c7:e9
    jeeva@jeeva:~$ ifconfig
    enp0s3: flags=4163<UP,BROADCAST,RUNNING,MULTICAST>  mtu 1500
            inet 192.168.1.100  netmask 255.255.255.0  broadcast 192.168.1.255
            inet6 fe80::21a:2bff:fe3c:4d5e  prefixlen 64  scopeid 0x20<link>
            ether 00:1a:2b:3c:4d:5e  txqueuelen 1000  (Ethernet)
            RX packets 81  bytes 32007 (32.0 KB)
            RX errors 0  dropped 0  overruns 0  frame 0
            TX packets 482  bytes 45545 (45.5 KB)
            TX errors 0  dropped 0 overruns 0  carrier 0  collisions 0
    
    lo: flags=73<UP,LOOPBACK,RUNNING>  mtu 65536
            inet 127.0.0.1  netmask 255.0.0.0
            inet6 ::1  prefixlen 128  scopeid 0x10<host>
            loop  txqueuelen 1000  (Local Loopback)
            RX packets 344  bytes 35884 (35.8 KB)
            RX errors 0  dropped 0  overruns 0  frame 0
            TX packets 344  bytes 35884 (35.8 KB)
            TX errors 0  dropped 0 overruns 0  carrier 0  collisions 0


















