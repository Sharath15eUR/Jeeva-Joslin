# MODULE - 4 ASSIGNMENT

## 1)  What is the significance of MAC layer and in which position it is placed in the OSI model

The MAC (Medium Access Control) layer is very important in wireless communication because it controls how devices share and use the wireless channel. It decides when to send or receive data to avoid collisions and ensures that data reaches the correct destination. It also handles things like addressing, frame formatting, and error checking. In the OSI model, the MAC layer is part of the Data Link Layer, which is Layer 2, and it sits just above the Physical Layer.

## 2) Describe the frame format of the 802.11 MAC header and explain the purpose of each fields

The 802.11 MAC header includes several fields. The Frame Control field tells the type of frame and controls various operations. The Duration/ID field shows how long the medium will be reserved. There are up to four Address fields used for sender, receiver, and AP identification. The Sequence Control field helps with the correct order of frames. The QoS Control field is used for quality of service if needed. The Frame Body carries the actual data, and the FCS (Frame Check Sequence) is used to detect any transmission errors.

## 3. Please list all the MAC layer functionalities in all Management, Control and Data plane 
At the MAC layer, functionalities are organized across the management, control, and data planes. In the management plane, the MAC is responsible for tasks like scanning, authentication, association, reassociation, disassociation, deauthentication, and beacon generation. These operations establish and maintain network connectivity. In the control plane, the MAC handles mechanisms that help manage access to the medium, such as RTS/CTS handshakes, ACKs, Block ACKs, PS-Poll, and BAR frames. These control frames ensure reliable communication, power saving, and collision avoidance. The data plane primarily focuses on transferring user data by handling frame encapsulation, aggregation (A-MSDU, A-MPDU), fragmentation, retransmissions, and ensuring proper delivery through acknowledgment mechanisms.

## 4. Explain the scanning process and its types in detail

Scanning is the process by which a station (STA) discovers available Wi-Fi networks and potential access points (APs). There are two types of scanning: passive scanning and active scanning. In passive scanning, the STA listens on each channel for beacon frames periodically broadcasted by APs. This method conserves energy but may be slower in detecting available networks. In active scanning, the STA actively sends probe request frames on different channels and waits for probe responses from APs, allowing faster discovery at the cost of higher energy usage. Scanning is a critical step before association, enabling the STA to gather information about available networks, including SSIDs, supported data rates, security capabilities, and load conditions.

## 5. Brief about the client association process 
The client association process establishes a logical link between the STA and the AP. After successful scanning and optionally authentication (depending on the network), the STA sends an association request frame to the chosen AP. This frame includes information like the STA's capabilities, supported data rates, listen interval, and security settings. The AP processes this request and, if accepted, responds with an association response frame containing the association ID (AID) and confirmation of the supported parameters. Once associated, the STA becomes a recognized part of the network and can begin exchanging data frames with the AP.


## 6. Explain each steps involved in EAPOL 4-way handshake and the purpose of each keys derived from the process

The EAPOL (Extensible Authentication Protocol over LAN) 4-Way Handshake is crucial for establishing secure communication after a client is associated. The process involves four steps: (1) The AP sends a nonce (ANonce) to the STA. (2) The STA generates its own nonce (SNonce), derives the Pairwise Transient Key (PTK) using PMK, ANonce, SNonce, and MAC addresses, and sends the SNonce to the AP. (3) The AP derives the same PTK, sends a third message containing GTK (Group Temporal Key) encrypted using the PTK, and (4) the STA confirms the handshake by sending an acknowledgment. The keys derived include the PTK for unicast traffic, the GTK for multicast/broadcast traffic, and optionally other keys for further session protection.



## 7. Describe the power saving scheme in MAC layer and explore on the types of Power saving mechanisms

The MAC layer incorporates several power-saving schemes to optimize battery life in wireless stations. The basic power-saving mechanism involves the STA setting the power management bit in frames and waking up periodically to check beacons containing TIMs (Traffic Indication Maps). Advanced power-saving mechanisms include U-APSD (Unscheduled Automatic Power Save Delivery), where data frames are delivered after the STA triggers transmission; and TWT (Target Wake Time) introduced in 802.11ax, which allows STAs to negotiate specific wake times with APs, significantly reducing contention and power consumption. These mechanisms help balance performance with energy efficiency.

## 8. Describe the Medium Access Control methodologies 

The MAC layer uses specific methodologies to control access to the shared wireless medium. The primary method is CSMA/CA (Carrier Sense Multiple Access with Collision Avoidance), where a STA listens to the channel and transmits only when it senses the medium is idle. If the medium is busy, the STA waits for a random backoff period. Techniques like RTS/CTS (Request to Send / Clear to Send) are used to reduce collisions, particularly in environments with hidden nodes. Enhanced mechanisms like TXOP (Transmission Opportunity) allow a station to reserve the medium for multiple frame exchanges without contention. These methodologies ensure fair and efficient use of the medium.

## 9. Brief about the Block ACK mechanism and its advantages

The Block Acknowledgment (Block ACK) mechanism enhances MAC efficiency by allowing the acknowledgment of multiple frames with a single control frame. Instead of sending an individual ACK for each received MPDU, a BA frame uses a bitmap to acknowledge up to 64 MPDUs at once. This drastically reduces the overhead associated with sending many small acknowledgment frames, improves throughput, and optimizes performance especially when high data rates and frame aggregation are used. The Block ACK setup is negotiated through ADDBA Request/Response frames before aggregated transmissions start.

## 10. Explain about A-MSDU, A-MPDU and A-MSDU in A-MPDU 

A-MSDU (Aggregated MAC Service Data Unit) allows multiple MSDUs to be combined into a single MPDU, reducing per-frame overhead. However, all MSDUs within an A-MSDU must share the same destination and quality of service settings. A-MPDU (Aggregated MAC Protocol Data Unit) allows multiple MPDUs to be aggregated and sent together in a single PPDU, each with its own MAC header and FCS, providing better error recovery than A-MSDU. A-MSDU-in-A-MPDU aggregation combines both methods: first aggregating MSDUs into MPDUs (A-MSDU) and then aggregating those MPDUs into an A-MPDU. This hybrid approach maximizes transmission efficiency while still allowing partial retransmissions when individual MPDUs fail.


