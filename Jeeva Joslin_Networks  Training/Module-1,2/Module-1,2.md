# Module 1 and 2 Assessment
## 1. Consider a case, a folder has multiple files and how would copy it to destination machine path (Try using SCP, cp options in Linux) 

### Copy Directory from Local Machine to Remote Machine 

#### Command - To copy folder named `driver` in Local Machine to a folder named `networks` in Remote Machine :
```
scp -r driver 21bcs009@172.16.16.200:~/networks
```
#### Local Machine
    
    jeeva@jeeva:~/embedur$ ls
    driver  p1.sh
    jeeva@jeeva:~/embedur$ tree -a
    .
    ├── driver
    │   ├── hello.c
    │   ├── hello.ko
    │   ├── .hello.ko.cmd
    │   ├── hello.mod
    │   ├── hello.mod.c
    │   ├── .hello.mod.cmd
    │   ├── hello.mod.o
    │   ├── .hello.mod.o.cmd
    │   ├── hello.o
    │   ├── .hello.o.cmd
    │   ├── Learn.c
    │   ├── Makefile
    │   ├── modules.order
    │   ├── .modules.order.cmd
    │   ├── Module.symvers
    │   └── .Module.symvers.cmd
    └── p1.sh
    
    2 directories, 17 files
    jeeva@jeeva:~/embedur$ scp -r driver 21bcs009@172.16.16.200:~/networks
    
    *************************************
    
         Welcome to MEPCOLINUX
    
    *************************************
          Keep Your Password Secure
    *************************************
    
    
    21bcs009@172.16.16.200's password: 
    hello.ko                                                                                                       100%  167KB   5.5MB/s   00:00    
    Makefile                                                                                                       100%  155    12.8KB/s   00:00    
    .hello.o.cmd                                                                                                   100%   44KB   2.3MB/s   00:00    
    hello.mod.c                                                                                                    100% 1074   345.0KB/s   00:00    
    Module.symvers                                                                                                 100%    0     0.0KB/s   00:00    
    hello.o                                                                                                        100%   21KB   2.3MB/s   00:00    
    hello.mod.o                                                                                                    100%  147KB   4.8MB/s   00:00    
    hello.c                                                                                                        100%  381   169.8KB/s   00:00    
    Learn.c                                                                                                        100%    0     0.0KB/s   00:00    
    .Module.symvers.cmd                                                                                            100%  176    33.7KB/s   00:00    
    .hello.ko.cmd                                                                                                  100%  226    68.5KB/s   00:00    
    hello.mod                                                                                                      100%   27     3.5KB/s   00:00    
    .hello.mod.o.cmd                                                                                               100%   45KB   2.6MB/s   00:00    
    .hello.mod.cmd                                                                                                 100%  150    36.5KB/s   00:00    
    modules.order                                                                                                  100%   27     2.5KB/s   00:00    
    .modules.order.cmd                                                                                             100%  122    30.4KB/s   00:00 
#### Remote Machine
    jeeva@jeeva:~/embedur$ ssh 21bcs009@172.16.16.200
    
    *************************************
    
         Welcome to MEPCOLINUX
    
    *************************************
          Keep Your Password Secure
    *************************************
    
    
    21bcs009@172.16.16.200's password: 
    Last login: Wed Feb 26 14:36:35 2025 from 172.16.3.4
    [21bcs009@mepcolinux ~]$ls
    1year  2year  3year  4year  networks
    [21bcs009@mepcolinux ~]$cd networks
    [21bcs009@mepcolinux networks]$ls
    [21bcs009@mepcolinux networks]$ls
    driver
    [21bcs009@mepcolinux networks]$tree -a
    .
    └── driver
        ├── hello.c
        ├── hello.ko
        ├── .hello.ko.cmd
        ├── hello.mod
        ├── hello.mod.c
        ├── .hello.mod.cmd
        ├── hello.mod.o
        ├── .hello.mod.o.cmd
        ├── hello.o
        ├── .hello.o.cmd
        ├── Learn.c
        ├── Makefile
        ├── modules.order
        ├── .modules.order.cmd
        ├── Module.symvers
        └── .Module.symvers.cmd
    
    1 directory, 16 files


#### Copying from Remote Machine to Local Machine :
    
    jeeva@jeeva:~/embedur$ ls
    p1.sh
    jeeva@jeeva:~/embedur$ scp -r 21bcs009@172.16.16.200:~/networks/driver .
    
    *************************************
    
         Welcome to MEPCOLINUX
    
    *************************************
          Keep Your Password Secure
    *************************************
    
    
    21bcs009@172.16.16.200's password: 
    .hello.o.cmd                                                                                                   100%   44KB 792.6KB/s   00:00    
    hello.ko                                                                                                       100%  167KB   4.1MB/s   00:00    
    .hello.mod.o.cmd                                                                                               100%   45KB   3.2MB/s   00:00    
    modules.order                                                                                                  100%   27     4.8KB/s   00:00    
    .hello.ko.cmd                                                                                                  100%  226    28.9KB/s   00:00    
    hello.mod                                                                                                      100%   27     1.6KB/s   00:00    
    Makefile                                                                                                       100%  155    43.7KB/s   00:00    
    hello.mod.c                                                                                                    100% 1074   159.0KB/s   00:00    
    .modules.order.cmd                                                                                             100%  122    32.0KB/s   00:00    
    .hello.mod.cmd                                                                                                 100%  150     9.2KB/s   00:00    
    hello.c                                                                                                        100%  381    84.7KB/s   00:00    
    hello.o                                                                                                        100%   21KB 532.0KB/s   00:00    
    hello.mod.o                                                                                                    100%  147KB   3.9MB/s   00:00    
    .Module.symvers.cmd                                                                                            100%  176    57.3KB/s   00:00    
    jeeva@jeeva:~/embedur$ ls
    driver  p1.sh
    jeeva@jeeva:~/embedur$ 

#### Screenshots :

##### Local Machine Directory Structure (Folder to be copied) :
![Local machine - directory](https://github.com/user-attachments/assets/3a8a3c0a-6ed9-4cdd-8c7b-ee993904255c)

##### Remote Machine before copying folder :
![Remote login empty directory](https://github.com/user-attachments/assets/ceba0d2a-960b-4f03-97bb-a3f82af0fc79)

##### After SCP - Local Machine :

![after scp command local machine](https://github.com/user-attachments/assets/172b1df8-9ce4-4d81-849c-40e86796b814)

##### After SCP - Remote Machine :

![after scp remote](https://github.com/user-attachments/assets/f21c1bbd-54eb-4ee1-8dfe-4ae8652afb31)

##### Copying from Remote to Local Machine :

![Remote to Local](https://github.com/user-attachments/assets/9641b45c-9cae-4f10-9340-9d48c78038aa)

### Copy Directory within Local Machine

#### Command - To copy folder named `driver` to  a folder named `newfolder` :
```
cp -r driver newfolder
```
    jeeva@jeeva:~/embedur$ ls
    driver  p1.sh
    jeeva@jeeva:~/embedur$ tree -a
    .
    ├── driver
    │   ├── hello.c
    │   ├── hello.ko
    │   ├── .hello.ko.cmd
    │   ├── hello.mod
    │   ├── hello.mod.c
    │   ├── .hello.mod.cmd
    │   ├── hello.mod.o
    │   ├── .hello.mod.o.cmd
    │   ├── hello.o
    │   ├── .hello.o.cmd
    │   ├── Learn.c
    │   ├── Makefile
    │   ├── modules.order
    │   ├── .modules.order.cmd
    │   ├── Module.symvers
    │   └── .Module.symvers.cmd
    └── p1.sh
    
    2 directories, 17 files
    jeeva@jeeva:~/embedur$ mkdir newfolder
    jeeva@jeeva:~/embedur$ ls
    driver  newfolder  p1.sh
    jeeva@jeeva:~/embedur$ tree -a
    .
    ├── driver
    │   ├── hello.c
    │   ├── hello.ko
    │   ├── .hello.ko.cmd
    │   ├── hello.mod
    │   ├── hello.mod.c
    │   ├── .hello.mod.cmd
    │   ├── hello.mod.o
    │   ├── .hello.mod.o.cmd
    │   ├── hello.o
    │   ├── .hello.o.cmd
    │   ├── Learn.c
    │   ├── Makefile
    │   ├── modules.order
    │   ├── .modules.order.cmd
    │   ├── Module.symvers
    │   └── .Module.symvers.cmd
    ├── newfolder
    └── p1.sh
    
    3 directories, 17 files
    jeeva@jeeva:~/embedur$ cp -r driver newfolder
    jeeva@jeeva:~/embedur$ ls
    driver  newfolder  p1.sh
    jeeva@jeeva:~/embedur$ tree -a
    .
    ├── driver
    │   ├── hello.c
    │   ├── hello.ko
    │   ├── .hello.ko.cmd
    │   ├── hello.mod
    │   ├── hello.mod.c
    │   ├── .hello.mod.cmd
    │   ├── hello.mod.o
    │   ├── .hello.mod.o.cmd
    │   ├── hello.o
    │   ├── .hello.o.cmd
    │   ├── Learn.c
    │   ├── Makefile
    │   ├── modules.order
    │   ├── .modules.order.cmd
    │   ├── Module.symvers
    │   └── .Module.symvers.cmd
    ├── newfolder
    │   └── driver
    │       ├── hello.c
    │       ├── hello.ko
    │       ├── .hello.ko.cmd
    │       ├── hello.mod
    │       ├── hello.mod.c
    │       ├── .hello.mod.cmd
    │       ├── hello.mod.o
    │       ├── .hello.mod.o.cmd
    │       ├── hello.o
    │       ├── .hello.o.cmd
    │       ├── Learn.c
    │       ├── Makefile
    │       ├── modules.order
    │       ├── .modules.order.cmd
    │       ├── Module.symvers
    │       └── .Module.symvers.cmd
    └── p1.sh
    
    4 directories, 33 files
    jeeva@jeeva:~/embedur$ 

#### Screenshots:

![CP-1](https://github.com/user-attachments/assets/ed7bbc48-da9c-4a80-9797-5b1df8dc54a8)
![CP2](https://github.com/user-attachments/assets/7cb69899-c07b-40fc-a6c1-4575f13df43f)
![CP3](https://github.com/user-attachments/assets/6f225beb-938e-4c88-a235-3364cf4849ed)
![CP4](https://github.com/user-attachments/assets/fca4fb39-35b4-4872-a659-35bb44c4c8c0)


## 2.Host a FTP and SFTP server and try PUT and GET operations. 

#### FTP SERVER - MACHINE - 1 - LINUX (HOST)

    jeeva@jeeva:~/FTPCHECK-LINUX$ ls
    jeeva@jeeva:~/FTPCHECK-LINUX$ sudo systemctl restart vsftpd
    jeeva@jeeva:~/FTPCHECK-LINUX$ ftp 172.16.5.160
    Connected to 172.16.5.160.
    220 (vsFTPd 3.0.5)
    Name (172.16.5.160:jeeva): jeeva
    331 Please specify the password.
    Password: 
    230 Login successful.
    Remote system type is UNIX.
    Using binary mode to transfer files.
    ftp> ls
    229 Entering Extended Passive Mode (|||57339|)
    150 Here comes the directory listing.
    drwxrwxr-x    2 1000     1000         4096 Feb 27 14:46 FTPCHECK-LINUX
    drwxr-xr-x    2 1000     1000         4096 Feb 02 18:31 Pictures
    drwxr-xr-x    3 1000     1000         4096 Feb 27 14:43 Public
    drwxrwxrwx    4 1000     1000         4096 Feb 27 11:32 embedur
    -rw-------    1 1000     1000          240 Feb 27 13:48 p1.sh
    drwx------    5 1000     1000         4096 Feb 09 21:04 snap
    226 Directory send OK.
    ftp> ls
    229 Entering Extended Passive Mode (|||63309|)
    150 Here comes the directory listing.
    drwxrwxr-x    2 1000     1000         4096 Feb 27 14:46 FTPCHECK-LINUX
    drwxr-xr-x    2 1000     1000         4096 Feb 02 18:31 Pictures
    drwxr-xr-x    3 1000     1000         4096 Feb 27 14:43 Public
    drwxrwxrwx    4 1000     1000         4096 Feb 27 11:32 embedur
    -rw-------    1 1000     1000          125 Feb 27 14:49 file_to_be_transferred.txt
    -rw-------    1 1000     1000          240 Feb 27 13:48 p1.sh
    drwx------    5 1000     1000         4096 Feb 09 21:04 snap
    226 Directory send OK.
    ftp> get file_to_be_transferred.txt
    local: file_to_be_transferred.txt remote: file_to_be_transferred.txt
    229 Entering Extended Passive Mode (|||7912|)
    150 Opening BINARY mode data connection for file_to_be_transferred.txt (125 bytes).
    100% |***********************|   125      408.26 KiB/s    00:00 ETA
    226 Transfer complete.
    125 bytes received in 00:00 (210.10 KiB/s)
    ftp> exit
    221 Goodbye.
    jeeva@jeeva:~/FTPCHECK-LINUX$ ls
    file_to_be_transferred.txt
    jeeva@jeeva:~/FTPCHECK-LINUX$ 

#### MACHINE - 2 - WINDOWS
    
    PS C:\Users\Jeeva Joslin\Desktop\FTPCHECK-WINDOWS> ls
    
    
        Directory: C:\Users\Jeeva Joslin\Desktop\FTPCHECK-WINDOWS
    
    
    Mode                 LastWriteTime         Length Name
    ----                 -------------         ------ ----
    -a----        26-02-2025  09:14 AM            125 file_to_be_tr
                                                      ansferred.txt
    
    
    PS C:\Users\Jeeva Joslin\Desktop\FTPCHECK-WINDOWS> ftp 172.16.5.160
    Connected to 172.16.5.160.
    220 (vsFTPd 3.0.5)
    200 Always in UTF8 mode.
    User (172.16.5.160:(none)): jeeva
    331 Please specify the password.
    Password:
    
    230 Login successful.
    ftp> ls
    200 PORT command successful. Consider using PASV.
    150 Here comes the directory listing.
    FTPCHECK-LINUX
    Pictures
    Public
    embedur
    p1.sh
    snap
    226 Directory send OK.
    ftp: 59 bytes received in 0.00Seconds 29.50Kbytes/sec.
    ftp> put file_to_be_transferred.txt
    200 PORT command successful. Consider using PASV.
    150 Ok to send data.
    226 Transfer complete.
    ftp: 125 bytes sent in 0.00Seconds 31.25Kbytes/sec.
    ftp> ls
    200 PORT command successful. Consider using PASV.
    150 Here comes the directory listing.
    FTPCHECK-LINUX
    Pictures
    Public
    embedur
    file_to_be_transferred.txt
    p1.sh
    snap
    226 Directory send OK.
    ftp: 87 bytes received in 0.00Seconds 29.00Kbytes/sec.
    ftp> bye
    221 Goodbye.
    PS C:\Users\Jeeva Joslin\Desktop\FTPCHECK-WINDOWS>

#### Screenshots

##### MACHINE 1

![LINUX1](https://github.com/user-attachments/assets/5a23b2b2-6efe-45e9-8164-6a5418325b41)
![LINUX2](https://github.com/user-attachments/assets/a7944eec-8088-4afb-9bac-00003ed90041)

##### MACHINE 2

![Screenshot (243)](https://github.com/user-attachments/assets/93b122d1-ef72-405b-88e1-102824863e36)

![Screenshot (244)](https://github.com/user-attachments/assets/c81514ed-58db-4b42-a807-f11016bd523d)

#### SFTP 

    jeeva@jeeva:~$ ls
    embedur  file_to_be_transferred.txt  FTPCHECK-LINUX  p1.sh  Pictures  Public  snap  test_file.txt
    jeeva@jeeva:~$ sftp sftpuser@127.0.0.1
    sftpuser@127.0.0.1's password: 
    Connected to 127.0.0.1.
    sftp> ls
    files  snap   
    sftp> cd files
    sftp> ls
    file_to_be_transferred.txt   
    sftp> get file_to_be_transferred.txt 
    Fetching /files/file_to_be_transferred.txt to file_to_be_transferred.txt
    file_to_be_transferred.txt                                                                                     100%  125    52.1KB/s   00:00    
    sftp> put test_file.txt
    Uploading test_file.txt to /files/test_file.txt
    test_file.txt                                                                                                  100%    0     0.0KB/s   00:00    
    sftp> ls
    file_to_be_transferred.txt   test_file.txt                
    sftp> bye
    jeeva@jeeva:~$ cd /home/sftpuser/files
    jeeva@jeeva:/home/sftpuser/files$ ls
    file_to_be_transferred.txt  test_file.txt
    jeeva@jeeva:/home/sftpuser/files$ 

#### Screenshot

![SFTP](https://github.com/user-attachments/assets/6ff69029-7e70-4579-baeb-454df1442540)


## 3. Explore with Wireshark/TCP-dump/cisco packet tracer tools and learn about packets filters.

### Wireshark:

![Screenshot (245)](https://github.com/user-attachments/assets/328fec69-ca6d-4797-b7be-4f40d44dafac)


![Screenshot 2025-02-27 155006](https://github.com/user-attachments/assets/630a0678-1fce-4bc1-891e-037d7dac4cab)


![Screenshot (246)](https://github.com/user-attachments/assets/8aae44f2-2733-41b0-975a-1a0618b5a87a)


![Screenshot (247)](https://github.com/user-attachments/assets/5f81790b-f022-489a-a8e9-54323dab474b)



![Screenshot (248)](https://github.com/user-attachments/assets/8991ee7e-b41d-4d93-8970-c0afb0063b10)


![Screenshot (249)](https://github.com/user-attachments/assets/a9d9d05d-24e1-4cd0-877a-7b0510980858)

![Screenshot (250)](https://github.com/user-attachments/assets/76dd1678-0890-4548-b204-2490253764d8)


![Screenshot (251)](https://github.com/user-attachments/assets/1e45a1c3-8c6c-4ae4-88cf-71354853697d)


![Screenshot (252)](https://github.com/user-attachments/assets/c9b2b87a-ce5d-4e68-afd1-64da01ab7d15)



![Screenshot (253)](https://github.com/user-attachments/assets/188aed62-b127-497c-afb8-5ee5988dbcff)


### TCP dump

    jeeva@jeeva:~$ sudo tcpdump -i enp0s3
    tcpdump: verbose output suppressed, use -v[v]... for full protocol decode
    listening on enp0s3, link-type EN10MB (Ethernet), snapshot length 262144 bytes
    14:14:46.795497 IP 10.0.2.15.mdns > mdns.mcast.net.mdns: 0 [2q] PTR (QM)? _ipp._tcp.local. PTR (QM)? _ipps._tcp.local. (45)
    14:14:46.837642 IP 10.0.2.15.44784 > dns.google.domain: 44096+ PTR? 251.0.0.224.in-addr.arpa. (42)
    14:14:46.851301 IP dns.google.domain > 10.0.2.15.44784: 44096 1/0/0 PTR mdns.mcast.net. (70)
    14:14:46.851732 IP 10.0.2.15.56648 > dns.google.domain: 21284+ PTR? 15.2.0.10.in-addr.arpa. (40)
    14:14:46.870228 IP dns.google.domain > 10.0.2.15.56648: 21284 NXDomain 0/0/0 (40)
    14:14:46.935986 IP 10.0.2.15.56759 > dns.google.domain: 33567+ PTR? 8.8.8.8.in-addr.arpa. (38)
    14:14:46.951159 IP dns.google.domain > 10.0.2.15.56759: 33567 1/0/0 PTR dns.google. (62)
    14:14:47.389301 IP6 fe80::a00:27ff:fe46:c7e9.mdns > ff02::fb.mdns: 0 [2q] PTR (QM)? _ipps._tcp.local. PTR (QM)? _ipp._tcp.local. (45)
    14:14:47.456071 IP 10.0.2.15.53371 > dns.google.domain: 2768+ PTR? b.f.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.2.0.f.f.ip6.arpa. (90)
    14:14:47.475181 IP dns.google.domain > 10.0.2.15.53371: 2768 NXDomain 0/1/0 (154)
    14:14:47.475562 IP 10.0.2.15.54928 > dns.google.domain: 14220+ PTR? 9.e.7.c.6.4.e.f.f.f.7.2.0.0.a.0.0.0.0.0.0.0.0.0.0.0.0.0.0.8.e.f.ip6.arpa. (90)
    14:14:47.526124 IP dns.google.domain > 10.0.2.15.54928: 14220 NXDomain 0/1/0 (154)
    14:14:50.376610 ARP, Request who-has 10.0.2.2 tell 10.0.2.15, length 28
    14:14:50.378617 ARP, Reply 10.0.2.2 is-at 52:54:00:12:35:02 (oui Unknown), length 46
    14:14:50.472122 IP 10.0.2.15.54058 > dns.google.domain: 21806+ PTR? 2.2.0.10.in-addr.arpa. (39)
    14:14:50.486880 IP dns.google.domain > 10.0.2.15.54058: 21806 NXDomain 0/0/0 (39)
    ^C
    16 packets captured
    16 packets received by filter
    0 packets dropped by kernel
    jeeva@jeeva:~$ tcpdump -D
    1.enp0s3 [Up, Running, Connected]
    2.any (Pseudo-device that captures on all interfaces) [Up, Running]
    3.lo [Up, Running, Loopback]
    4.bluetooth-monitor (Bluetooth Linux Monitor) [Wireless]
    5.nflog (Linux netfilter log (NFLOG) interface) [none]
    6.nfqueue (Linux netfilter queue (NFQUEUE) interface) [none]
    7.dbus-system (D-Bus system bus) [none]
    8.dbus-session (D-Bus session bus) [none]
    jeeva@jeeva:~$ sudo tcpdump -i enp0s3 port 22 -vv
    tcpdump: listening on enp0s3, link-type EN10MB (Ethernet), snapshot length 262144 bytes
    14:21:48.312678 IP (tos 0x10, ttl 64, id 31548, offset 0, flags [DF], proto TCP (6), length 60)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [S], cksum 0xc915 (incorrect -> 0xf95f), seq 3183258460, win 64240, options [mss 1460,sackOK,TS val 3505296467 ecr 0,nop,wscale 7], length 0
    14:21:48.325142 IP (tos 0x0, ttl 64, id 47, offset 0, flags [none], proto TCP (6), length 44)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [S.], cksum 0xcf77 (correct), seq 3136001, ack 3183258461, win 65535, options [mss 1460], length 0
    14:21:48.325878 IP (tos 0x10, ttl 64, id 31549, offset 0, flags [DF], proto TCP (6), length 40)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [.], cksum 0xc901 (incorrect -> 0xec43), seq 1, ack 1, win 64240, length 0
    14:21:48.328968 IP (tos 0x10, ttl 64, id 31550, offset 0, flags [DF], proto TCP (6), length 82)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [P.], cksum 0xc92b (incorrect -> 0xc4b0), seq 1:43, ack 1, win 64240, length 42: SSH: SSH-2.0-OpenSSH_9.6p1 Ubuntu-3ubuntu13.8
    14:21:48.330393 IP (tos 0x0, ttl 64, id 48, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [.], cksum 0xe70a (correct), seq 1, ack 43, win 65535, length 0
    14:21:48.334728 IP (tos 0x0, ttl 64, id 49, offset 0, flags [none], proto TCP (6), length 61)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [P.], cksum 0x2345 (correct), seq 1:22, ack 43, win 65535, length 21: SSH: SSH-2.0-OpenSSH_7.4
    14:21:48.334793 IP (tos 0x10, ttl 64, id 31551, offset 0, flags [DF], proto TCP (6), length 40)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [.], cksum 0xc901 (incorrect -> 0xec19), seq 43, ack 22, win 64219, length 0
    14:21:48.366194 IP (tos 0x10, ttl 64, id 31552, offset 0, flags [DF], proto TCP (6), length 1576)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [P.], cksum 0xcf01 (incorrect -> 0x6fec), seq 43:1579, ack 22, win 64219, length 1536
    14:21:48.368268 IP (tos 0x0, ttl 64, id 50, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [.], cksum 0xe141 (correct), seq 22, ack 1503, win 65535, length 0
    14:21:48.368269 IP (tos 0x0, ttl 64, id 51, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [.], cksum 0xe0f5 (correct), seq 22, ack 1579, win 65535, length 0
    14:21:48.370367 IP (tos 0x0, ttl 64, id 52, offset 0, flags [none], proto TCP (6), length 1320)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [P.], cksum 0x3ea0 (correct), seq 22:1302, ack 1579, win 65535, length 1280
    14:21:48.373799 IP (tos 0x10, ttl 64, id 31554, offset 0, flags [DF], proto TCP (6), length 88)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [P.], cksum 0xc931 (incorrect -> 0xd912), seq 1579:1627, ack 1302, win 65535, length 48
    14:21:48.375588 IP (tos 0x0, ttl 64, id 53, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [.], cksum 0xdbc5 (correct), seq 1302, ack 1627, win 65535, length 0
    14:21:48.394828 IP (tos 0x0, ttl 64, id 55, offset 0, flags [none], proto TCP (6), length 332)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [P.], cksum 0x9651 (correct), seq 1302:1594, ack 1627, win 65535, length 292
    14:21:48.403958 IP (tos 0x10, ttl 64, id 31555, offset 0, flags [DF], proto TCP (6), length 56)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [P.], cksum 0xc911 (incorrect -> 0xd068), seq 1627:1643, ack 1594, win 65535, length 16
    14:21:48.405397 IP (tos 0x0, ttl 64, id 57, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [.], cksum 0xda91 (correct), seq 1594, ack 1643, win 65535, length 0
    14:21:48.407894 IP (tos 0x10, ttl 64, id 31556, offset 0, flags [DF], proto TCP (6), length 84)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [P.], cksum 0xc92d (incorrect -> 0xc96e), seq 1643:1687, ack 1594, win 65535, length 44
    14:21:48.408434 IP (tos 0x0, ttl 64, id 58, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [.], cksum 0xda65 (correct), seq 1594, ack 1687, win 65535, length 0
    14:21:48.410641 IP (tos 0x0, ttl 64, id 59, offset 0, flags [none], proto TCP (6), length 84)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [P.], cksum 0xd978 (correct), seq 1594:1638, ack 1687, win 65535, length 44
    14:21:48.410770 IP (tos 0x10, ttl 64, id 31557, offset 0, flags [DF], proto TCP (6), length 108)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [P.], cksum 0xc945 (incorrect -> 0xa9ca), seq 1687:1755, ack 1638, win 65535, length 68
    14:21:48.411285 IP (tos 0x0, ttl 64, id 60, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [.], cksum 0xd9f5 (correct), seq 1638, ack 1755, win 65535, length 0
    14:21:48.425333 IP (tos 0x0, ttl 64, id 61, offset 0, flags [none], proto TCP (6), length 304)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [P.], cksum 0x0b05 (correct), seq 1638:1902, ack 1755, win 65535, length 264
    14:21:48.471238 IP (tos 0x10, ttl 64, id 31558, offset 0, flags [DF], proto TCP (6), length 40)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [.], cksum 0xc901 (incorrect -> 0xd8ed), seq 1755, ack 1902, win 65535, length 0
    14:21:51.749875 IP (tos 0x10, ttl 64, id 31559, offset 0, flags [DF], proto TCP (6), length 188)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [P.], cksum 0xc995 (incorrect -> 0xb5c9), seq 1755:1903, ack 1902, win 65535, length 148
    14:21:51.750470 IP (tos 0x0, ttl 64, id 62, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [.], cksum 0xd859 (correct), seq 1902, ack 1903, win 65535, length 0
    14:21:53.520666 IP (tos 0x0, ttl 64, id 63, offset 0, flags [none], proto TCP (6), length 92)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [P.], cksum 0x46b6 (correct), seq 1902:1954, ack 1903, win 65535, length 52
    14:21:53.520710 IP (tos 0x10, ttl 64, id 31560, offset 0, flags [DF], proto TCP (6), length 40)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [.], cksum 0xc901 (incorrect -> 0xd825), seq 1903, ack 1954, win 65535, length 0
    14:21:56.182075 IP (tos 0x10, ttl 64, id 31561, offset 0, flags [DF], proto TCP (6), length 188)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [P.], cksum 0xc995 (incorrect -> 0x39e4), seq 1903:2051, ack 1954, win 65535, length 148
    14:21:56.182695 IP (tos 0x0, ttl 64, id 64, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [.], cksum 0xd791 (correct), seq 1954, ack 2051, win 65535, length 0
    14:21:56.257848 IP (tos 0x0, ttl 64, id 65, offset 0, flags [none], proto TCP (6), length 68)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [P.], cksum 0x4983 (correct), seq 1954:1982, ack 2051, win 65535, length 28
    14:21:56.257875 IP (tos 0x10, ttl 64, id 31562, offset 0, flags [DF], proto TCP (6), length 40)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [.], cksum 0xc901 (incorrect -> 0xd775), seq 2051, ack 1982, win 65535, length 0
    14:21:56.258373 IP (tos 0x10, ttl 64, id 31563, offset 0, flags [DF], proto TCP (6), length 152)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [P.], cksum 0xc971 (incorrect -> 0x7031), seq 2051:2163, ack 1982, win 65535, length 112
    14:21:56.258706 IP (tos 0x0, ttl 64, id 66, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [.], cksum 0xd705 (correct), seq 1982, ack 2163, win 65535, length 0
    14:21:57.466722 IP (tos 0x0, ttl 64, id 67, offset 0, flags [none], proto TCP (6), length 540)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [P.], cksum 0x902b (correct), seq 1982:2482, ack 2163, win 65535, length 500
    14:21:57.473423 IP (tos 0x10, ttl 64, id 31564, offset 0, flags [DF], proto TCP (6), length 388)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [P.], cksum 0xca5d (incorrect -> 0x3b54), seq 2163:2511, ack 2482, win 65535, length 348
    14:21:57.474829 IP (tos 0x0, ttl 64, id 68, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [.], cksum 0xd3b5 (correct), seq 2482, ack 2511, win 65535, length 0
    14:21:57.475648 IP (tos 0x0, ttl 64, id 69, offset 0, flags [none], proto TCP (6), length 84)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [P.], cksum 0x7606 (correct), seq 2482:2526, ack 2511, win 65535, length 44
    14:21:57.476047 IP (tos 0x10, ttl 64, id 31565, offset 0, flags [DF], proto TCP (6), length 500)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [P.], cksum 0xcacd (incorrect -> 0x9d78), seq 2511:2971, ack 2526, win 65535, length 460
    14:21:57.476610 IP (tos 0x0, ttl 64, id 70, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [.], cksum 0xd1bd (correct), seq 2526, ack 2971, win 65535, length 0
    14:21:57.478227 IP (tos 0x0, ttl 64, id 71, offset 0, flags [none], proto TCP (6), length 348)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [P.], cksum 0xbd9e (correct), seq 2526:2834, ack 2971, win 65535, length 308
    14:21:57.489339 IP (tos 0x0, ttl 64, id 72, offset 0, flags [none], proto TCP (6), length 148)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [P.], cksum 0x77d7 (correct), seq 2834:2942, ack 2971, win 65535, length 108
    14:21:57.489340 IP (tos 0x0, ttl 64, id 73, offset 0, flags [none], proto TCP (6), length 312)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [P.], cksum 0x2336 (correct), seq 2942:3214, ack 2971, win 65535, length 272
    14:21:57.489663 IP (tos 0x10, ttl 64, id 31566, offset 0, flags [DF], proto TCP (6), length 40)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [.], cksum 0xc901 (incorrect -> 0xcf0d), seq 2971, ack 3214, win 65535, length 0
    14:21:57.677914 IP (tos 0x0, ttl 64, id 74, offset 0, flags [none], proto TCP (6), length 108)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [P.], cksum 0xcfac (correct), seq 3214:3282, ack 2971, win 65535, length 68
    14:21:57.720646 IP (tos 0x10, ttl 64, id 31567, offset 0, flags [DF], proto TCP (6), length 40)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [.], cksum 0xc901 (incorrect -> 0xcec9), seq 2971, ack 3282, win 65535, length 0
    14:22:09.944833 IP (tos 0x10, ttl 64, id 31568, offset 0, flags [DF], proto TCP (6), length 76)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [P.], cksum 0xc925 (incorrect -> 0xf641), seq 2971:3007, ack 3282, win 65535, length 36
    14:22:09.945519 IP (tos 0x0, ttl 64, id 75, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [.], cksum 0xcea5 (correct), seq 3282, ack 3007, win 65535, length 0
    14:22:09.947685 IP (tos 0x0, ttl 64, id 76, offset 0, flags [none], proto TCP (6), length 76)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [P.], cksum 0x3978 (correct), seq 3282:3318, ack 3007, win 65535, length 36
    14:22:09.947808 IP (tos 0x10, ttl 64, id 31569, offset 0, flags [DF], proto TCP (6), length 40)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [.], cksum 0xc901 (incorrect -> 0xce81), seq 3007, ack 3318, win 65535, length 0
    14:22:10.215377 IP (tos 0x10, ttl 64, id 31570, offset 0, flags [DF], proto TCP (6), length 76)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [P.], cksum 0xc925 (incorrect -> 0x2471), seq 3007:3043, ack 3318, win 65535, length 36
    14:22:10.215777 IP (tos 0x0, ttl 64, id 77, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [.], cksum 0xce5d (correct), seq 3318, ack 3043, win 65535, length 0
    14:22:10.217111 IP (tos 0x0, ttl 64, id 78, offset 0, flags [none], proto TCP (6), length 76)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [P.], cksum 0x13c7 (correct), seq 3318:3354, ack 3043, win 65535, length 36
    14:22:10.217128 IP (tos 0x10, ttl 64, id 31571, offset 0, flags [DF], proto TCP (6), length 40)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [.], cksum 0xc901 (incorrect -> 0xce39), seq 3043, ack 3354, win 65535, length 0
    14:22:10.361375 IP (tos 0x10, ttl 64, id 31572, offset 0, flags [DF], proto TCP (6), length 76)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [P.], cksum 0xc925 (incorrect -> 0x6804), seq 3043:3079, ack 3354, win 65535, length 36
    14:22:10.361977 IP (tos 0x0, ttl 64, id 79, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [.], cksum 0xce15 (correct), seq 3354, ack 3079, win 65535, length 0
    14:22:10.362875 IP (tos 0x0, ttl 64, id 80, offset 0, flags [none], proto TCP (6), length 76)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [P.], cksum 0x55fb (correct), seq 3354:3390, ack 3079, win 65535, length 36
    14:22:10.362893 IP (tos 0x10, ttl 64, id 31573, offset 0, flags [DF], proto TCP (6), length 40)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [.], cksum 0xc901 (incorrect -> 0xcdf1), seq 3079, ack 3390, win 65535, length 0
    14:22:10.524487 IP (tos 0x10, ttl 64, id 31574, offset 0, flags [DF], proto TCP (6), length 76)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [P.], cksum 0xc925 (incorrect -> 0x3983), seq 3079:3115, ack 3390, win 65535, length 36
    14:22:10.524889 IP (tos 0x0, ttl 64, id 81, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [.], cksum 0xcdcd (correct), seq 3390, ack 3115, win 65535, length 0
    14:22:10.526576 IP (tos 0x0, ttl 64, id 82, offset 0, flags [none], proto TCP (6), length 76)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [P.], cksum 0xb5ac (correct), seq 3390:3426, ack 3115, win 65535, length 36
    14:22:10.526589 IP (tos 0x10, ttl 64, id 31575, offset 0, flags [DF], proto TCP (6), length 40)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [.], cksum 0xc901 (incorrect -> 0xcda9), seq 3115, ack 3426, win 65535, length 0
    14:22:10.918017 IP (tos 0x10, ttl 64, id 31576, offset 0, flags [DF], proto TCP (6), length 76)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [P.], cksum 0xc925 (incorrect -> 0xa396), seq 3115:3151, ack 3426, win 65535, length 36
    14:22:10.918881 IP (tos 0x0, ttl 64, id 83, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [.], cksum 0xcd85 (correct), seq 3426, ack 3151, win 65535, length 0
    14:22:10.922489 IP (tos 0x0, ttl 64, id 84, offset 0, flags [none], proto TCP (6), length 260)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [P.], cksum 0xcad9 (correct), seq 3426:3646, ack 3151, win 65535, length 220
    14:22:10.922507 IP (tos 0x10, ttl 64, id 31577, offset 0, flags [DF], proto TCP (6), length 40)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [.], cksum 0xc901 (incorrect -> 0xcca9), seq 3151, ack 3646, win 65535, length 0
    14:22:10.923017 IP (tos 0x10, ttl 64, id 31578, offset 0, flags [DF], proto TCP (6), length 76)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [P.], cksum 0xc925 (incorrect -> 0x9813), seq 3151:3187, ack 3646, win 65535, length 36
    14:22:10.923663 IP (tos 0x0, ttl 64, id 85, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [.], cksum 0xcc85 (correct), seq 3646, ack 3187, win 65535, length 0
    14:22:10.925482 IP (tos 0x10, ttl 64, id 31579, offset 0, flags [DF], proto TCP (6), length 100)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [P.], cksum 0xc93d (incorrect -> 0x3e3f), seq 3187:3247, ack 3646, win 65535, length 60
    14:22:10.925966 IP (tos 0x0, ttl 64, id 86, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [.], cksum 0xcc49 (correct), seq 3646, ack 3247, win 65535, length 0
    14:22:10.928157 IP (tos 0x10, ttl 64, id 31580, offset 0, flags [DF], proto TCP (6), length 40)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [F.], cksum 0xc901 (incorrect -> 0xcc48), seq 3247, ack 3646, win 65535, length 0
    14:22:10.929311 IP (tos 0x0, ttl 64, id 87, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [.], cksum 0xcc48 (correct), seq 3646, ack 3248, win 65535, length 0
    14:22:10.947592 IP (tos 0x0, ttl 64, id 88, offset 0, flags [none], proto TCP (6), length 40)
        172.16.16.200.ssh > 10.0.2.15.48214: Flags [F.], cksum 0xcc47 (correct), seq 3646, ack 3248, win 65535, length 0
    14:22:10.948975 IP (tos 0x10, ttl 64, id 0, offset 0, flags [DF], proto TCP (6), length 40)
        10.0.2.15.48214 > 172.16.16.200.ssh: Flags [.], cksum 0xa547 (correct), seq 3248, ack 3647, win 9984, length 0
    ^C
    73 packets captured
    73 packets received by filter
    0 packets dropped by kernel
    jeeva@jeeva:~$ sudo tcpdump -i enp0s3 port 22 -vv -w sshlogin.pcap
    tcpdump: listening on enp0s3, link-type EN10MB (Ethernet), snapshot length 262144 bytes
    ^C41 packets captured
    41 packets received by filter
    0 packets dropped by kernel
    jeeva@jeeva:~$ sudo tcpdump -r sshlogin.pcap
    reading from file sshlogin.pcap, link-type EN10MB (Ethernet), snapshot length 262144
    14:22:52.258584 IP 10.0.2.15.34866 > 172.16.16.200.ssh: Flags [S], seq 1961886595, win 64240, options [mss 1460,sackOK,TS val 3505360414 ecr 0,nop,wscale 7], length 0
    14:22:52.260777 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [S.], seq 5888001, ack 1961886596, win 65535, options [mss 1460], length 0
    14:22:52.260805 IP 10.0.2.15.34866 > 172.16.16.200.ssh: Flags [.], ack 1, win 64240, length 0
    14:22:52.261372 IP 10.0.2.15.34866 > 172.16.16.200.ssh: Flags [P.], seq 1:43, ack 1, win 64240, length 42: SSH: SSH-2.0-OpenSSH_9.6p1 Ubuntu-3ubuntu13.8
    14:22:52.261907 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [.], ack 43, win 65535, length 0
    14:22:52.285074 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [P.], seq 1:22, ack 43, win 65535, length 21: SSH: SSH-2.0-OpenSSH_7.4
    14:22:52.285120 IP 10.0.2.15.34866 > 172.16.16.200.ssh: Flags [.], ack 22, win 64219, length 0
    14:22:52.286621 IP 10.0.2.15.34866 > 172.16.16.200.ssh: Flags [P.], seq 43:1579, ack 22, win 64219, length 1536
    14:22:52.287708 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [.], ack 1503, win 65535, length 0
    14:22:52.287709 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [.], ack 1579, win 65535, length 0
    14:22:52.288710 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [P.], seq 22:1302, ack 1579, win 65535, length 1280
    14:22:52.290928 IP 10.0.2.15.34866 > 172.16.16.200.ssh: Flags [P.], seq 1579:1627, ack 1302, win 65535, length 48
    14:22:52.291998 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [.], ack 1627, win 65535, length 0
    14:22:52.299260 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [P.], seq 1302:1594, ack 1627, win 65535, length 292
    14:22:52.303698 IP 10.0.2.15.34866 > 172.16.16.200.ssh: Flags [P.], seq 1627:1643, ack 1594, win 65535, length 16
    14:22:52.304373 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [.], ack 1643, win 65535, length 0
    14:22:52.304494 IP 10.0.2.15.34866 > 172.16.16.200.ssh: Flags [P.], seq 1643:1687, ack 1594, win 65535, length 44
    14:22:52.305223 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [.], ack 1687, win 65535, length 0
    14:22:52.306386 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [P.], seq 1594:1638, ack 1687, win 65535, length 44
    14:22:52.306537 IP 10.0.2.15.34866 > 172.16.16.200.ssh: Flags [P.], seq 1687:1755, ack 1638, win 65535, length 68
    14:22:52.309428 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [.], ack 1755, win 65535, length 0
    14:22:52.317123 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [P.], seq 1638:1902, ack 1755, win 65535, length 264
    14:22:52.357368 IP 10.0.2.15.34866 > 172.16.16.200.ssh: Flags [.], ack 1902, win 65535, length 0
    14:22:54.939279 IP 10.0.2.15.34866 > 172.16.16.200.ssh: Flags [P.], seq 1755:1903, ack 1902, win 65535, length 148
    14:22:54.939900 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [.], ack 1903, win 65535, length 0
    14:22:55.001828 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [P.], seq 1902:1930, ack 1903, win 65535, length 28
    14:22:55.001868 IP 10.0.2.15.34866 > 172.16.16.200.ssh: Flags [.], ack 1930, win 65535, length 0
    14:22:55.002755 IP 10.0.2.15.34866 > 172.16.16.200.ssh: Flags [P.], seq 1903:2015, ack 1930, win 65535, length 112
    14:22:55.003184 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [.], ack 2015, win 65535, length 0
    14:22:55.855032 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [P.], seq 1930:2430, ack 2015, win 65535, length 500
    14:22:55.858820 IP 10.0.2.15.34866 > 172.16.16.200.ssh: Flags [P.], seq 2015:2363, ack 2430, win 65535, length 348
    14:22:55.859780 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [.], ack 2363, win 65535, length 0
    14:22:55.860398 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [P.], seq 2430:2474, ack 2363, win 65535, length 44
    14:22:55.860632 IP 10.0.2.15.34866 > 172.16.16.200.ssh: Flags [P.], seq 2363:2823, ack 2474, win 65535, length 460
    14:22:55.861567 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [.], ack 2823, win 65535, length 0
    14:22:55.862714 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [P.], seq 2474:2782, ack 2823, win 65535, length 308
    14:22:55.876177 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [P.], seq 2782:2890, ack 2823, win 65535, length 108
    14:22:55.876178 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [P.], seq 2890:2982, ack 2823, win 65535, length 92
    14:22:55.876413 IP 10.0.2.15.34866 > 172.16.16.200.ssh: Flags [.], ack 2982, win 65535, length 0
    14:22:56.072024 IP 172.16.16.200.ssh > 10.0.2.15.34866: Flags [P.], seq 2982:3086, ack 2823, win 65535, length 104
    14:22:56.112864 IP 10.0.2.15.34866 > 172.16.16.200.ssh: Flags [.], ack 3086, win 65535, length 0

#### Screenshots :

![TCPDUMP1](https://github.com/user-attachments/assets/41e62d2b-b46c-4f48-ac1f-ef31d0555d3b)

![TCPDUMP2](https://github.com/user-attachments/assets/ef37e353-8cd0-4676-a85b-5d9512661d39)



![TCPDUMP3](https://github.com/user-attachments/assets/c4a20d6a-ea99-4e00-a424-32f86f5b90ec)


![TCPDUMP4](https://github.com/user-attachments/assets/502cbe9a-af00-4a80-a324-2a3a9fad84de)



### CISCO PACKET TRACER :


![Screenshot (255)](https://github.com/user-attachments/assets/6d981107-78b9-42bc-89da-375fc80e42df)

![Screenshot (256)](https://github.com/user-attachments/assets/83810b7f-0021-4271-9699-5ddaebdac00d)

## 4.Understand linux utility commands like - ping, arp (Understand each params from ifconfig output) 

    jeeva@jeeva:~$ ping google.com
    PING google.com (142.250.196.14) 56(84) bytes of data.
    64 bytes from maa03s44-in-f14.1e100.net (142.250.196.14): icmp_seq=1 ttl=117 time=24.1 ms
    64 bytes from maa03s44-in-f14.1e100.net (142.250.196.14): icmp_seq=2 ttl=117 time=22.1 ms
    64 bytes from maa03s44-in-f14.1e100.net (142.250.196.14): icmp_seq=3 ttl=117 time=17.1 ms
    64 bytes from maa03s44-in-f14.1e100.net (142.250.196.14): icmp_seq=4 ttl=117 time=16.3 ms
    64 bytes from maa03s44-in-f14.1e100.net (142.250.196.14): icmp_seq=5 ttl=117 time=17.3 ms
    64 bytes from maa03s44-in-f14.1e100.net (142.250.196.14): icmp_seq=6 ttl=117 time=19.2 ms
    ^C
    --- google.com ping statistics ---
    6 packets transmitted, 6 received, 0% packet loss, time 5010ms
    rtt min/avg/max/mdev = 16.262/19.347/24.108/2.857 ms
    jeeva@jeeva:~$ arp -a
    ? (10.0.2.2) at 52:54:00:12:35:02 [ether] on enp0s3
    jeeva@jeeva:~$ jeeva@jeeva:~$ ifconfig
    enp0s3: flags=4163<UP,BROADCAST,RUNNING,MULTICAST>  mtu 1500
            inet 10.0.2.15  netmask 255.255.255.0  broadcast 10.0.2.255
            inet6 fe80::a00:27ff:fe46:c7e9  prefixlen 64  scopeid 0x20<link>
            ether 08:00:27:46:c7:e9  txqueuelen 1000  (Ethernet)
            RX packets 355  bytes 105892 (105.8 KB)
            RX errors 0  dropped 0  overruns 0  frame 0
            TX packets 411  bytes 51894 (51.8 KB)
            TX errors 0  dropped 0 overruns 0  carrier 0  collisions 0
    
    lo: flags=73<UP,LOOPBACK,RUNNING>  mtu 65536
            inet 127.0.0.1  netmask 255.0.0.0
            inet6 ::1  prefixlen 128  scopeid 0x10<host>
            loop  txqueuelen 1000  (Local Loopback)
            RX packets 29  bytes 2951 (2.9 KB)
            RX errors 0  dropped 0  overruns 0  frame 0
            TX packets 29  bytes 2951 (2.9 KB)
            TX errors 0  dropped 0 overruns 0  carrier 0  collisions 0
    
    jeeva@jeeva:~$ 

## 5.  Understand what happens when duplicate IPs configured in a network.

It causes an IP conflict leading to communication issues.

## 6. Understand how to access remote system using (VNC viewer, Anydesk, teamviewer and remote desktop connections)

1. VNC Viewer (For LAN & Internet)
Install VNC Server on the remote system.
Start the server using vncserver and note the IP (192.168.1.100:1).
Install VNC Viewer on the local system, enter the IP, and connect.
2. AnyDesk (Quick Remote Access)
Install AnyDesk on both systems.
Get the 9-digit ID from the remote system.
Enter the ID in AnyDesk on the local system and request access.
3. TeamViewer (For Business & Support)
Install TeamViewer on both systems.
Note the Partner ID and Password from the remote system.
Enter it in TeamViewer on the local system and connect.


## 7. How to check your default gateway is reachable or not and understand about default gateway.

    jeeva@jeeva:~$ ip route | grep default
    default via 10.0.2.2 dev enp0s3 proto dhcp src 10.0.2.15 metric 100 
    jeeva@jeeva:~$ 


## 8.Check iwconfig/ifconfig to understand in detail about network interfaces (check about interface speed, MTU and other parameters)

    jeeva@jeeva:~$ ifconfig
    enp0s3: flags=4163<UP,BROADCAST,RUNNING,MULTICAST>  mtu 1500
            inet 10.0.2.15  netmask 255.255.255.0  broadcast 10.0.2.255
            inet6 fe80::a00:27ff:fe46:c7e9  prefixlen 64  scopeid 0x20<link>
            ether 08:00:27:46:c7:e9  txqueuelen 1000  (Ethernet)
            RX packets 1450  bytes 1661352 (1.6 MB)
            RX errors 0  dropped 0  overruns 0  frame 0
            TX packets 552  bytes 62262 (62.2 KB)
            TX errors 0  dropped 0 overruns 0  carrier 0  collisions 0
    
    lo: flags=73<UP,LOOPBACK,RUNNING>  mtu 65536
            inet 127.0.0.1  netmask 255.0.0.0
            inet6 ::1  prefixlen 128  scopeid 0x10<host>
            loop  txqueuelen 1000  (Local Loopback)
            RX packets 33  bytes 3191 (3.1 KB)
            RX errors 0  dropped 0  overruns 0  frame 0
            TX packets 33  bytes 3191 (3.1 KB)
            TX errors 0  dropped 0 overruns 0  carrier 0  collisions 0
    
    jeeva@jeeva:~$ iwconfig
    lo        no wireless extensions.
    
    enp0s3    no wireless extensions.
    
    jeeva@jeeva:~$ 


#### ifconfig Output Analysis
Ethernet Interface: enp0s3
This is the active network interface (Ethernet).

flags=4163<UP,BROADCAST,RUNNING,MULTICAST>

UP – The interface is active.
BROADCAST – Supports broadcasting.
RUNNING – It is currently functioning.
MULTICAST – Supports multicast communication.
MTU (mtu 1500)

The Maximum Transmission Unit (MTU) is 1500 bytes, which is standard for Ethernet.
IP Address (inet 10.0.2.15)

Your assigned IPv4 address on the network.
Netmask (255.255.255.0)

Defines the network range (subnet mask).
Broadcast Address (10.0.2.255)

Used for sending packets to all devices in the network.
MAC Address (ether 08:00:27:46:c7:e9)

The physical address of the network interface card (NIC).
Packet Transmission and Reception:

RX packets: 1450 (Received packets, 1.6 MB data).
TX packets: 552 (Sent packets, 62.2 KB data).
No Errors, Drops, or Collisions – No network issues detected.
Loopback Interface (lo)
This is the virtual interface for internal communication within the system.

IP Address (inet 127.0.0.1)

Also called localhost, used for testing network services.
MTU (65536)

The loopback interface allows much larger packet sizes.

#### iwconfig Output Analysis


lo and enp0s3 → "no wireless extensions"
The system does not have a wireless adapter or it is not recognized.
Since enp0s3 is an Ethernet interface, it does not support wireless configurations.


## 9.Log in to your home router's web interface (usually at 192.168.1.1 or 192.168.0.1) and check the connected devices list.


    PS C:\Users\Jeeva Joslin> ipconfig
    
    Windows IP Configuration
    
    
    Ethernet adapter Ethernet 3:
    
       Connection-specific DNS Suffix  . : upsvr.mepcoeng.ac.in
       Link-local IPv6 Address . . . . . : fe80::d20f:339a:2c02:dfdd%14
       IPv4 Address. . . . . . . . . . . : 172.16.2.21
       Subnet Mask . . . . . . . . . . . : 255.255.224.0
       Default Gateway . . . . . . . . . : 172.16.16.1
    
    Ethernet adapter Ethernet 6:
    
       Connection-specific DNS Suffix  . :
       Link-local IPv6 Address . . . . . : fe80::122b:7d9f:a6ed:2177%12
       IPv4 Address. . . . . . . . . . . : 192.168.56.1
       Subnet Mask . . . . . . . . . . . : 255.255.255.0
       Default Gateway . . . . . . . . . :
    
    Wireless LAN adapter Local Area Connection* 1:
    
       Media State . . . . . . . . . . . : Media disconnected
       Connection-specific DNS Suffix  . :
    
    Wireless LAN adapter Local Area Connection* 2:
    
       Media State . . . . . . . . . . . : Media disconnected
       Connection-specific DNS Suffix  . :
    
    Wireless LAN adapter Wi-Fi:
    
       Media State . . . . . . . . . . . : Media disconnected
       Connection-specific DNS Suffix  . : upsvr.mepcoeng.ac.in
    
    Ethernet adapter Bluetooth Network Connection:
    
       Media State . . . . . . . . . . . : Media disconnected
       Connection-specific DNS Suffix  . :
    PS C:\Users\Jeeva Joslin> ping 172.16.16.1
    
    Pinging 172.16.16.1 with 32 bytes of data:
    Reply from 172.16.16.1: bytes=32 time=1ms TTL=64
    Reply from 172.16.16.1: bytes=32 time=1ms TTL=64
    Reply from 172.16.16.1: bytes=32 time<1ms TTL=64
    Reply from 172.16.16.1: bytes=32 time<1ms TTL=64
    
    Ping statistics for 172.16.16.1:
        Packets: Sent = 4, Received = 4, Lost = 0 (0% loss),
    Approximate round trip times in milli-seconds:
        Minimum = 0ms, Maximum = 1ms, Average = 0

## 10. Explain how a DHCP server assigns IP addresses to devices in your network.

When a new device (laptop, phone, etc.) connects to the network, it broadcasts a DHCP Discover message to find an available DHCP server.

2. DHCP Offer (Server → Client)
The DHCP server responds with a DHCP Offer message, suggesting an available IP address, along with:

Subnet Mask
Default Gateway (Router IP)
DNS Server
3. DHCP Request (Client → Server Confirmation Request)
The device selects the offered IP and sends a DHCP Request to confirm its choice.

4. DHCP Acknowledgment (Server → Client Confirmation)
The DHCP server confirms the assignment with a DHCP Acknowledgment (ACK), and the device configures itself with the provided settings.


## 11. Using a terminal, connect to a remote machine via SSH and telnet. 

    PS C:\Users\Jeeva Joslin> ssh 21bcs009@172.16.16.200
    
    *************************************
    
         Welcome to MEPCOLINUX
    
    *************************************
          Keep Your Password Secure
    *************************************
    
    
    21bcs009@172.16.16.200's password:
    Last login: Fri Feb 28 14:19:45 2025 from 172.16.2.21
    [21bcs009@mepcolinux ~]$exit
    logout
    Connection to 172.16.16.200 closed.
