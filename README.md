🔵 Bluetooth LED Control using Arduino (HC-06)

👩‍💻 Author
Swati Dhanade

📌 Project Overview
This project demonstrates how to control an LED wirelessly using an Arduino UNO and HC-06 Bluetooth module. Commands are sent from a mobile application via Bluetooth, allowing remote switching of the LED.

🛠️ Components Used
- Arduino UNO
- HC-06 Bluetooth Module
- LED
- Breadboard
- Jumper Wires

⚙️ Working Principle
1. Mobile app sends command ('1' for ON, '0' for OFF)
2. HC-06 receives data via Bluetooth
3. Data is transferred to Arduino using UART (TX/RX)
4. Arduino processes input and controls LED (Pin 13)

🔌 Circuit Connections
- HC-06 VCC → Arduino 5V  
- HC-06 GND → Arduino GND  
- HC-06 TX → Arduino Pin 2  
- HC-06 RX → Arduino Pin 3  
- LED → Arduino Pin 13 & GND  

💻 Code
The Arduino code is available inside the `Code` folder.

🎥 Demo Video
👉 Watch Project Demo: https://youtube.com/shorts/E4tgUh-bW7o   

---
📷 Output
The Output image is available inside the files.

🚀 Applications
- Home Automation
- Wireless Control Systems
- IoT Projects
- Smart Devices

📚 Learning Outcomes
- UART Communication
- Bluetooth Interfacing
- Arduino Programming
- Debugging Embedded Systems
