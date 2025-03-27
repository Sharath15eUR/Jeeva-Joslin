# Module 1 Assignment

## 1) In which osi layer the wifi standard or protocol fits


Wifi standard or protocol fits in the Data Link Layer of OSI model.


## 2) Can you share the Wi-Fi devices that you are using day to day life, share that device's wireless capability/properties after connecting to network. Match your device to corresponding Wi-Fi Generations based on properties.

![Screenshot 2025-03-27 122901](https://github.com/user-attachments/assets/63aac862-5033-4a71-94e1-dfd39c7f9a53)
![Screenshot 2025-03-27 122952](https://github.com/user-attachments/assets/a0ebbe1d-7424-4caf-9e72-8f058d8b425c)
![IMG-20250327-WA0015](https://github.com/user-attachments/assets/affea150-850e-4b60-9acf-3f2f836d6ca6)

## 3) What is BSS and ESS?

A BSS is the basic block of a Wi-Fi network consisting of a single access point (AP) and the connected STA.
An ESS is a collection of multiple BSSs connected together through a wired network.

## 4) What are the basic functionalities of Wi-Fi Access Point (AP).

1. Wireless Signal Transmission & Reception:
The AP transmits and receives Wi-Fi signals to allow devices to connect wirelessly.
Uses different frequency bands (2.4 GHz, 5 GHz, 6 GHz) and technologies like OFDM, DSSS for communication.

2. Network Bridging:
Connects wireless clients (STAs) to the wired LAN (Local Area Network).
Works as a layer 2 bridge, forwarding packets between wired and wireless networks.

3. Assigning IP Addresses (via DHCP Relay or Built-in DHCP Server):
Can act as a DHCP relay to pass requests to a DHCP server.
Some APs (especially in home networks) have a built-in DHCP server to assign IPs to connected devices.

4. Medium Access Control (MAC) via CSMA/CA:
Uses Carrier Sense Multiple Access with Collision Avoidance (CSMA/CA) to manage wireless medium access and avoid data collisions.

5. Authentication & Security Management:
Supports different security protocols
WPA2, WPA3 for encryption and authentication.
802.1X with RADIUS for enterprise-level authentication.
Manages client authentication using Pre-Shared Key (PSK) or Enterprise mode (EAP-based methods).

6. SSID Broadcasting & Multi-SSID Support:
Advertises SSID (Service Set Identifier) so clients can discover and connect to the Wi-Fi network.
Can support multiple SSIDs, allowing different virtual networks (e.g., Guest Wi-Fi and Employee Wi-Fi).

7. Roaming Support in ESS Networks:
Works with other APs in an Extended Service Set (ESS) to provide seamless roaming between APs.
Supports 802.11r (Fast Transition) for smooth handover between APs without connection drops.

8. Band Steering & Load Balancing:
Band Steering: Directs clients to the 5 GHz or 6 GHz band to reduce congestion on 2.4 GHz.
Load Balancing: Distributes clients across multiple APs to optimize performance.

9. QoS (Quality of Service) with WMM (Wi-Fi Multimedia):
Prioritizes traffic types (e.g., voice, video, best effort, background) using Wi-Fi Multimedia (WMM) for better performance.

10. Power Management & Energy Efficiency:
Supports 802.11 Power Save Mode to reduce battery consumption on client devices.
Uses Target Wake Time (TWT) (Wi-Fi 6 feature) to schedule wake-up times for IoT devices.

## 5)
