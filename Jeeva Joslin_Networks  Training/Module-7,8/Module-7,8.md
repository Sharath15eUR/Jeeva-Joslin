# Module - 7,8 ASSIGNMENT

## 1)Try Test-Connection and nslookup commands for below websites www.google.com www.facebook.com www.amazon.com www.github.com www.cisco.com

    PS C:\Users\Jeeva Joslin> Test-Connection www.google.com -Count 4
    
    Source        Destination     IPV4Address      IPV6Address                              Bytes    Time(ms)
    ------        -----------     -----------      -----------                              -----    --------
    JEEVA-JOSLIN  www.google.com  142.250.193.68                                            32       43
    JEEVA-JOSLIN  www.google.com  142.250.193.68                                            32       124
    JEEVA-JOSLIN  www.google.com  142.250.193.68                                            32       158
    JEEVA-JOSLIN  www.google.com  142.250.193.68                                            32       317
    
    
    PS C:\Users\Jeeva Joslin> Test-Connection www.facebook.com -Count 4
    
    Source        Destination     IPV4Address      IPV6Address                              Bytes    Time(ms)
    ------        -----------     -----------      -----------                              -----    --------
    JEEVA-JOSLIN  www.facebook... 57.144.146.1                                              32       44
    JEEVA-JOSLIN  www.facebook... 57.144.146.1                                              32       42
    JEEVA-JOSLIN  www.facebook... 57.144.146.1                                              32       45
    JEEVA-JOSLIN  www.facebook... 57.144.146.1                                              32       42
    
    
    PS C:\Users\Jeeva Joslin> Test-Connection www.amazon.com -Count 4
    
    Source        Destination     IPV4Address      IPV6Address                              Bytes    Time(ms)
    ------        -----------     -----------      -----------                              -----    --------
    JEEVA-JOSLIN  www.amazon.com  23.210.77.132                                             32       7
    JEEVA-JOSLIN  www.amazon.com  23.210.77.132                                             32       9
    JEEVA-JOSLIN  www.amazon.com  23.210.77.132                                             32       19
    JEEVA-JOSLIN  www.amazon.com  23.210.77.132                                             32       98
    
    
    PS C:\Users\Jeeva Joslin> Test-Connection www.github.com -Count 4
    
    Source        Destination     IPV4Address      IPV6Address                              Bytes    Time(ms)
    ------        -----------     -----------      -----------                              -----    --------
    JEEVA-JOSLIN  www.github.com  20.207.73.82                                              32       26
    JEEVA-JOSLIN  www.github.com  20.207.73.82                                              32       24
    JEEVA-JOSLIN  www.github.com  20.207.73.82                                              32       30
    JEEVA-JOSLIN  www.github.com  20.207.73.82                                              32       73
    
    
    PS C:\Users\Jeeva Joslin> Test-Connection www.cisco.com -Count 4
    
    Source        Destination     IPV4Address      IPV6Address                              Bytes    Time(ms)
    ------        -----------     -----------      -----------                              -----    --------
    JEEVA-JOSLIN  www.cisco.com   23.209.254.61                                             32       7
    JEEVA-JOSLIN  www.cisco.com   23.209.254.61                                             32       9
    JEEVA-JOSLIN  www.cisco.com   23.209.254.61                                             32       13
    JEEVA-JOSLIN  www.cisco.com   23.209.254.61                                             32       41
    
    
    PS C:\Users\Jeeva Joslin> nslookup www.google.com
    Server:  UnKnown
    Address:  192.168.0.1
    
    Non-authoritative answer:
    Name:    www.google.com
    Addresses:  2404:6800:4002:817::2004
              142.250.183.100
    
    PS C:\Users\Jeeva Joslin> nslookup www.facebook.com
    Server:  UnKnown
    Address:  192.168.0.1
    
    Non-authoritative answer:
    Name:    star-mini.c10r.facebook.com
    Addresses:  2a03:2880:f34e:1:face:b00c:0:25de
              57.144.122.1
    Aliases:  www.facebook.com
    
    PS C:\Users\Jeeva Joslin> nslookup www.amazon.com
    Server:  UnKnown
    Address:  192.168.0.1
    
    Non-authoritative answer:
    Name:    www-amazon-com.customer.fastly.net
    Addresses:  2606:2cc0:2::374
              2606:2cc0:3::374
              2606:2cc0::374
              2606:2cc0:1::374
              162.219.225.118
    Aliases:  www.amazon.com
              tp.47cf2c8c9-frontier.amazon.com
    
    PS C:\Users\Jeeva Joslin> nslookup www.github.com
    Server:  UnKnown
    Address:  192.168.0.1
    
    Non-authoritative answer:
    Name:    github.com
    Address:  20.207.73.82
    Aliases:  www.github.com
    
    PS C:\Users\Jeeva Joslin> nslookup www.cisco.com
    Server:  UnKnown
    Address:  192.168.0.1
    
    Non-authoritative answer:
    Name:    e2867.dsca.akamaiedge.net
    Addresses:  2600:140f:6:1a7::b33
              2600:140f:6:18a::b33
              23.213.214.90
    Aliases:  www.cisco.com
              www.cisco.com.akadns.net
              wwwds.cisco.com.edgekey.net
              wwwds.cisco.com.edgekey.net.globalredir.akadns.net
    
    PS C:\Users\Jeeva Joslin>




## 2)Use Wireshark to capture and analyze DNS, TCP, UDP traffic and packet header, packet flow, options and flags

![Screenshot 2025-03-18 102300](https://github.com/user-attachments/assets/2ceb4e6a-d5e7-422b-b60a-3113fcf88976)

![Screenshot 2025-03-18 102343](https://github.com/user-attachments/assets/a52bf483-288b-4413-bdef-c49bb9986d6b)

![Screenshot 2025-03-18 102358](https://github.com/user-attachments/assets/5841b29d-6da5-439d-a0e9-fa3cdbd9e84f)

![Screenshot 2025-03-18 102548](https://github.com/user-attachments/assets/66521df1-083a-409a-bbee-8cee5db27819)

![Screenshot 2025-03-18 102908](https://github.com/user-attachments/assets/e3a0b126-73d7-46c1-84b7-125c14520668)

## 3)Explore traceroute/tracert for different websites eg:google.com and analyse the parameters in the output and explore different options for traceroute command 



## 4)Use Cisco packet tracer for the below 

## 5)Set up trunk ports between switches and try ping between different VLANs. 
I first configure VLANs on both switches, ensuring that PCs are assigned to the correct VLANs. Then, I set up a trunk link between the switches to allow multiple VLANs to communicate. Next, I assign appropriate IP addresses and default gateways to the PCs, ensuring they are in the correct subnet. Since VLANs cannot communicate directly, I enable IP routing on a Layer 3 switch and configure VLAN interfaces with the correct IP addresses. Finally, I test connectivity using the ping command, verifying that devices in different VLANs can successfully communicate.

![Screenshot 2025-03-18 121444](https://github.com/user-attachments/assets/e45e44a9-467c-497a-a807-9c12e494b8c7)

![Screenshot 2025-03-18 121642](https://github.com/user-attachments/assets/83e76b86-693a-4f18-8f7c-9aa2e2e10b3d)


![Screenshot 2025-03-18 121654](https://github.com/user-attachments/assets/71c3d06d-4dcc-4f89-b3d7-734eb2a3379d)

![Screenshot 2025-03-18 121725](https://github.com/user-attachments/assets/4a37fd88-0752-4363-a2d3-1a445ffbe3db)


![Screenshot 2025-03-18 121832](https://github.com/user-attachments/assets/d99df01f-7990-452f-bf36-3a9387f42a08)


![Screenshot 2025-03-18 121856](https://github.com/user-attachments/assets/68e35f72-5bd3-40e2-9f9c-24cfda539974)


![Screenshot 2025-03-18 124330](https://github.com/user-attachments/assets/1d10fb2d-128e-4ffa-92cf-84ff65f136f9)






![Screenshot 2025-03-18 130347](https://github.com/user-attachments/assets/f59f4fc6-a533-4e3e-8ae5-eec80a16ab78)

![Screenshot 2025-03-18 130430](https://github.com/user-attachments/assets/ec00a842-bfcf-4f3d-92d6-9dcdb8ffa058)




## 6)Change the native VLAN on a trunk port.Test for VLAN mismatches and troubleshoot. 


![Screenshot 2025-03-18 133639](https://github.com/user-attachments/assets/aa888273-5628-4fff-8d51-ed41fe2c25c6)




![Screenshot 2025-03-18 133639](https://github.com/user-attachments/assets/24d04524-1d66-4654-8bf0-cdeec8b296a4)


![Screenshot 2025-03-18 144427](https://github.com/user-attachments/assets/588529af-4e26-4ce8-b6d6-6a3fde952ee3)

![Screenshot 2025-03-18 144447](https://github.com/user-attachments/assets/43a3f0b0-8657-40db-aa91-2f1e008ed842)

![Screenshot 2025-03-18 144533](https://github.com/user-attachments/assets/63d3e586-9a28-4315-a076-295151510e15)



## 7)Configure a management VLAN and assign an IP address for remote access.Test SSH or Telnet access to the switch.
![Screenshot 2025-03-18 155517](https://github.com/user-attachments/assets/a8a79c90-f726-4376-8adc-eea230c1c0a7)


![Screenshot 2025-03-18 160039](https://github.com/user-attachments/assets/7feae445-dcb9-4900-8430-3b02e35c7497)



## 8)You have a Cisco switch and a VoIP phone that needs to be placed in a voice VLAN (VLAN 20). The data for the PC should remain in a separate VLAN (VLAN 10). Configure the switch port to support both voice and data traffic. 
![Screenshot 2025-03-18 160346](https://github.com/user-attachments/assets/84fea2db-3d6a-423c-856b-3d5c2c5dafbb)

![Screenshot 2025-03-18 160429](https://github.com/user-attachments/assets/61401bcb-140f-47a2-908e-8b20fb171a30)


![Screenshot 2025-03-18 160658](https://github.com/user-attachments/assets/c4171811-9a17-4402-9ccf-24b86f9b025f)



## 9)You configured VLANs 10 and 20 on your switch and assigned ports to each VLAN. However, devices in VLAN 10 cannot communicate with devices in VLAN 20. Troubleshoot the issue.

![Screenshot 2025-03-18 160346](https://github.com/user-attachments/assets/5740b88a-b645-4582-a71b-fdc11b1a94b2)

![Screenshot 2025-03-18 160429](https://github.com/user-attachments/assets/b1d07ffd-6903-4569-aabe-3aee7b2808f4)

![Screenshot 2025-03-18 160658](https://github.com/user-attachments/assets/7e8fef7f-5700-453e-8f6e-ec2316fcbb6d)


## 10)Try Inter VLAN routing with Router 

![Screenshot 2025-03-18 164215](https://github.com/user-attachments/assets/e2b3e7a9-29a4-4f69-8541-6a62046f62e2)


![Screenshot 2025-03-18 164226](https://github.com/user-attachments/assets/41e051d5-67ae-4878-b9af-3cf13d5520b8)


![Screenshot 2025-03-18 164247](https://github.com/user-attachments/assets/53302002-793f-4d33-97d3-85d993e1ed52)
![Screenshot 2025-03-18 164303](https://github.com/user-attachments/assets/b9238ced-6cab-4e07-b81b-80715daa5ded)



## 11)Implement ACLs to restrict traffic based on source and destination ports.Test rules by simulating legitimate and unauthorized traffic. 



## 12)Configure a standard Access Control List (ACL) on a router to permit traffic from a specific IP range.Test connectivity to verify the ACL is working as intended.



## 13)Create an extended ACL to block specific applications, such as HTTP or FTP traffic.Test the ACL rules by attempting to access blocked services. 




## 14)Try Static NAT, Dynamic NAT and PAT to translate IPs



## 15)Download iperf in laptop/phone and make sure they are in same network. Try different iperf commands with tcp, udp, birectional, reverse, multicast, parallel options and analyze the bandwidth and rate of transmission, delay, jitter etc. 




