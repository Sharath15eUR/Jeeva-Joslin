# MODULE - 6 ASSIGNMENT


## 1. What are the pillars of Wi-Fi security? 
The pillars of Wi-Fi security are Authentication, Encryption, and Integrity. Authentication ensures that only authorized users and devices can connect to the network. Encryption protects the confidentiality of data being transmitted over the air by making it unreadable to unauthorized parties. Integrity ensures that the data sent and received has not been altered during transmission, thereby preventing tampering or injection attacks. Together, these pillars provide a secure framework for wireless communication.
## 2. Explain the difference between authentication and encryption in WiFi security. 
Authentication and encryption serve different purposes in Wi-Fi security. Authentication is the process of verifying the identity of a device or user attempting to access the network, ensuring that only legitimate entities can connect. Encryption, on the other hand, protects the data exchanged between the client and the access point by scrambling it in a way that only authorized devices can decode. In short, authentication controls who can access the network, while encryption secures what is transmitted across it.
## 3. Explain the differences between WEP, WPA, WPA2, and WPA3. 
WEP (Wired Equivalent Privacy) was the first Wi-Fi security protocol, but it used weak encryption (RC4) and poor key management. WPA (Wi-Fi Protected Access) was introduced as a temporary fix, improving encryption with TKIP but still using RC4. WPA2 replaced WPA and introduced a stronger encryption protocol (AES with CCMP) and a more secure authentication mechanism. WPA3, the latest standard, further strengthens security with features like Simultaneous Authentication of Equals (SAE) for better protection against offline dictionary attacks and improved encryption strength, making networks much harder to breach.
## 4. Why is WEP considered insecure compared to WPA2 or WPA3? 
WEP is considered insecure because it uses static encryption keys, weak initialization vectors (IVs), and vulnerable algorithms (RC4) that can be exploited easily with widely available tools. Attackers can quickly recover WEP keys by capturing and analyzing network traffic. In contrast, WPA2 and WPA3 use much stronger encryption methods (AES) and dynamic key exchange mechanisms, making them vastly more secure and resilient against modern attacks.
## 5. Why was WPA2 introduced? 
WPA2 was introduced to address the fundamental security weaknesses present in WEP and WPA. While WPA served as a temporary solution using TKIP, WPA2 standardized the use of AES encryption and CCMP for data protection, offering a much stronger and more robust security framework. WPA2 also supported mandatory security features for enterprise networks, like 802.1X authentication, providing the level of protection needed for growing wireless network usage.
## 6. What is the role of the Pairwise Master Key (PMK) in the 4-way handshake? 
The Pairwise Master Key (PMK) is a crucial component of the Wi-Fi 4-Way Handshake. It is derived during the authentication phase (either via PSK or 802.1X/EAP methods) and serves as the shared secret between the client and the access point. During the 4-Way Handshake, the PMK is used to generate the Pairwise Transient Key (PTK), which encrypts and authenticates data frames between the client and AP. The PMK ensures that both parties have a trusted foundation for secure communication.


## 7. How does the 4-way handshake ensure mutual authentication between the client and the access point? 
The 4-Way Handshake ensures mutual authentication by proving possession of the PMK without transmitting it over the air. Both the client and the access point use the PMK and random nonces exchanged during the handshake to derive the same PTK. Successful derivation and confirmation of the PTK prove that both sides possess the same PMK, thereby verifying each other's identity implicitly. If any side fails to compute the correct PTK, the handshake will fail, preventing unauthorized access.
## 8. What will happen if we put a wrong passphrase during a 4Way handshake? 
If a wrong passphrase is used during the 4-Way Handshake, the client and the access point will derive different PMKs and, subsequently, different PTKs. As a result, the Message Integrity Code (MIC) validation will fail when verifying handshake messages. This mismatch causes the handshake to fail, preventing the client from associating with the network. Thus, a wrong passphrase directly leads to a failed connection attempt without revealing the correct passphrase to an attacker.


## 9. What problem does 802.1X solve in a network? 
802.1X solves the problem of securing network access by providing a robust framework for authenticating users and devices before granting network access. Without 802.1X, any device could attempt to connect once within range of the network. By introducing a system of identity verification involving a supplicant (client), authenticator (access point/switch), and authentication server (typically RADIUS), 802.1X ensures that only authorized devices can access the network, protecting against unauthorized access and intrusions.


## 10. How does 802.1X enhance security over wireless networks? 
802.1X enhances wireless security by enforcing strong authentication mechanisms, such as digital certificates or secure password exchanges (EAP methods), before allowing devices onto the network. This authentication occurs before IP connectivity is fully established, preventing unauthorized devices from even getting a basic network connection. Additionally, 802.1X integrates well with enterprise-grade security practices, supporting centralized access control, auditing, and policy enforcement, which are critical for maintaining a secure wireless environment.


