# MODULE - 5 ASSIGNMENT

## 1. What are the key features of Wi-Fi 6, 6E and 7 and how do they differ from previous standards like Wi-Fi 5 (802.11ac)? 
Wi-Fi 6 (802.11ax) introduced several enhancements over Wi-Fi 5, including Orthogonal Frequency Division Multiple Access (OFDMA), Target Wake Time (TWT), MU-MIMO uplink support, and BSS Coloring for reduced interference. Wi-Fi 6E extended Wi-Fi 6 into the 6 GHz band, providing more spectrum and reducing congestion. Wi-Fi 7 (802.11be) further advances wireless capabilities by introducing features like 320 MHz channel bandwidth, 4K-QAM modulation for higher data rates, Multi-Link Operation (MLO) for simultaneous use of multiple bands, and deterministic latency improvements, making it suitable for high-throughput, low-latency applications. Each generation improved spectral efficiency, latency, and capacity, targeting dense environments and modern device demands.

## 2. Explain the role of OFDMA in Wi-Fi 6 and how it improves network efficiency. 
OFDMA (Orthogonal Frequency Division Multiple Access) in Wi-Fi 6 allows multiple users to share a single Wi-Fi channel simultaneously by dividing it into smaller sub-channels called Resource Units (RUs). Each RU can carry data for a different device, drastically reducing contention and overhead compared to the traditional one-user-at-a-time approach of previous standards. This results in better network efficiency, lower latency, and improved performance, especially in environments with many connected devices such as airports, offices, and stadiums.


## 3. Discuss the benefits of Target Wake Time (TWT) in Wi-Fi 6 for loT devices. 
Target Wake Time (TWT) is a scheduling mechanism that allows devices to negotiate specific times to wake up and communicate with the access point. This drastically reduces the amount of time a device's radio needs to be active, leading to significant power savings. For IoT devices, which often need to conserve battery life while maintaining network connectivity, TWT is a crucial feature. It enables predictable, efficient communication, minimizing energy consumption while maintaining performance requirements.



## 4. Explain the significance of the 6 GHz frequency band in Wi-Fi 6E. 
The 6 GHz band introduced in Wi-Fi 6E offers a massive expansion of available spectrum compared to the crowded 2.4 GHz and 5 GHz bands. It provides up to 1200 MHz of new spectrum (depending on regional regulations), allowing for more wide channels (80 MHz and 160 MHz), less interference, and improved overall network performance. This new band is especially beneficial for applications requiring high bandwidth, such as VR/AR, 8K streaming, and enterprise-grade wireless networking.


## 5. Compare and contrast Wi-Fi 6 and Wi-Fi 6E in terms of range, bandwidth, and interference. 
Wi-Fi 6 and Wi-Fi 6E use the same technical framework (802.11ax), but Wi-Fi 6E operates in the 6 GHz band, whereas Wi-Fi 6 primarily uses 2.4 GHz and 5 GHz bands. In terms of range, Wi-Fi 6E has slightly lower range and penetration capabilities due to the higher frequency, which is more easily absorbed by obstacles like walls. However, Wi-Fi 6E offers significantly greater bandwidth and much less interference because the 6 GHz band is newer and less congested. Thus, Wi-Fi 6E provides faster speeds and lower latency in environments where users are closer to the access point.
## 6. What are the major innovations introduced in Wi-Fi 7 (802.11be)? 
Wi-Fi 7 introduces several groundbreaking enhancements including support for 320 MHz channels (doubling the maximum channel width from Wi-Fi 6), 4K-QAM modulation (increasing the amount of data transmitted per symbol), Multi-Link Operation (MLO) for simultaneous multi-band communication, and Preamble Puncturing for better spectrum utilization. It also focuses on reducing latency through Time-Sensitive Networking (TSN) features, making it ideal for applications like real-time gaming, 8K video streaming, AR/VR, and industrial automation.
## 7. Explain the concept of Multi-Link Operation (MLO) and its impact on throughput and latency. 
Multi-Link Operation (MLO) allows Wi-Fi 7 devices to use multiple frequency bands (e.g., 2.4 GHz, 5 GHz, and 6 GHz) simultaneously for data transmission and reception. This aggregation of links increases the total available bandwidth, enhancing throughput significantly. Moreover, MLO can dynamically switch or split traffic across different bands, which reduces latency and improves reliability, as devices can avoid congested or unreliable links in real-time. This results in faster, more consistent network performance.


## 8. What is the purpose of 802.11k and v, and how does it aid in roaming? 
802.11k and 802.11v are standards designed to optimize client roaming between access points. 802.11k provides information about the surrounding Wi-Fi environment, such as channel utilization and neighbor reports, allowing clients to make smarter decisions about when and where to roam. 802.11v enhances this by allowing network-assisted roaming through mechanisms like BSS Transition Management, where the network can suggest better access points to the client. Together, they enable more efficient and seamless handoffs, improving user experience in enterprise and large network deployments.
## 9. Explain the concept of Fast BSS Transition (802.11r) and its benefit in mobile environments. 

Fast BSS Transition (802.11r) enables devices to roam quickly between access points by streamlining the authentication process. It pre-authenticates clients with neighboring access points, allowing faster handoffs (typically under 50 milliseconds) without needing to perform full re-authentication each time. This is particularly beneficial for mobile environments, such as VoIP calls, video conferencing, or real-time gaming, where even minor interruptions during roaming can significantly degrade user experience.
## 10. How do 802.11k/v/r work together to provide seamless roaming in enterprise networks? 

802.11k, 802.11v, and 802.11r collectively enable fast, intelligent, and seamless roaming in enterprise networks. 802.11k helps clients identify the best possible access points by providing information about the network landscape. 802.11v allows the network to guide clients proactively towards better access points based on conditions like load and signal strength. 802.11r ensures that the transition between these access points happens rapidly and securely without full re-authentication delays. Working together, these protocols minimize disruptions during roaming, providing a smooth and uninterrupted user experience.
