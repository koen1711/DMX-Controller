# DMX Controller

DMX controller board based on ESP32 NodeMCU. Implementing both plain DMX and RDM while being able to read the entire DMX frame.

## Why?

We have an Theathre stage at school, we do a musical around christmas every year. We wanted to engineer boxes with LED Strips, alarms, etc. 
These things needed to respond with the lighting we already use, so DMX was chosen. Thus I started working on the controllers to control non traditional lights on the stage.

## How?

Now to use the project it's actually pretty simple, you plug in atleast one XLR cable for DMX in the ports, next you wire something up or just use the ESP32 to control DMX.
The possibilities are endless, we engineered it in a way that using a Mesh you can connect more things through one Controller. 

You need the PCB itself, female headers for the ESP32 and the ESP32 itself. Wire up what you need through the GPIO pins.

## Wiring diagram

<img width="816" height="384" alt="image" src="https://github.com/user-attachments/assets/7170fe50-24ae-4aec-93e1-ca6e9b0ae60a" />


## Bill of Materials

| Item | Qty. | Price (USD) | Ext. (USD) | Link |
|------|------|-------------|------------|------|
| 470µF 35V Electrolytic Capacitor (C1) | 1 | $0.0576 | $0.06 | [C2836436](https://www.lcsc.com/product-detail/C2836436.html) |
| 100µF 16V Electrolytic Capacitor (C12) | 1 | $0.0101 | $0.01 | [C4747963](https://www.lcsc.com/product-detail/C4747963.html) |
| 180µF 25V Electrolytic Capacitor (C3) | 1 | $0.0240 | $0.02 | [C49233128](https://www.lcsc.com/product-detail/C49233128.html) |
| Schottky Diode 40V 5A SMA (D4) | 1 | $0.0194 | $0.02 | [C22452](https://www.lcsc.com/product-detail/C22452.html) |
| 1x7 Pin Header 2.54mm | 7 | $0.0171 | $0.12 | [C6332200](https://www.lcsc.com/product-detail/C6332200.html) |
| XLR Male Connector - DMX IN (J1) | 1 | $0.3153 | $0.32 | [C309324](https://www.lcsc.com/product-detail/C309324.html) |
| XLR Female Connector - DMX OUT (J2) | 1 | $0.3287 | $0.33 | [C309326](https://www.lcsc.com/product-detail/C309326.html) |
| DC Barrel Jack 2.0mm (J3) | 1 | $0.0296 | $0.03 | [C16214](https://www.lcsc.com/product-detail/C16214.html) |
| 68µH Inductor 0805 (L1) | 1 | $0.0162 | $0.02 | [C275376](https://www.lcsc.com/product-detail/C275376.html) |
| 680Ω 0805 Resistor (R1, R2) | 2 | $0.0017 | $0.00 | [C17798](https://www.lcsc.com/product-detail/C17798.html) |
| 120Ω 0805 Resistor (R3) | 1 | $0.0010 | $0.00 | [C17437](https://www.lcsc.com/product-detail/C17437.html) |
| DPDT Slide Switch (SW1) | 1 | $0.0459 | $0.05 | [C431542](https://www.lcsc.com/product-detail/C431542.html) |
| MAX485 RS-485 Transceiver SO-8 (U1) | 1 | $0.0801 | $0.08 | [C668206](https://www.lcsc.com/product-detail/C668206.html) |
| ESP32 NodeMCU (U3) | 1 | - | - | - |
| XL1509-5.0E1 5V Buck Converter (U4) | 1 | $0.1109 | $0.11 | [C61063](https://www.lcsc.com/product-detail/C61063.html) |
| **Total** | | | **$1.17** | |

*Note: Price excludes U3 (ESP32 NodeMCU) which needs to be sourced separately.*

## Screenshots

<img width="1951" height="1079" alt="image" src="https://github.com/user-attachments/assets/b27fc8e1-0f80-4001-aeed-f01746ab187f" />
<img width="1282" height="723" alt="image" src="https://github.com/user-attachments/assets/75dfb286-4917-4b91-8233-861de1727720" />



