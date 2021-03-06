# Eagle Files

0. Uses Sparkfun DRC file
1. ERC and DRC check clean
2. Top and bottom Copper Pour
3. Nets Classes use 24 mil width and 16mil clearance
4. Polygons use Isolate 12 mil
5. Layer 26 bNames - bottom silkscreen has board dimensions on it

## Design

0. I may add more parts...
1. Uses a MoteinoMega, Adafruit Ultimate GPS and an Adafruit FONA GSM
2. The P-channel Mosfet is designed to power the GPS directly, avoiding the on board regulator
3. The VBAT is on the MotinoMega 3.3V rail to keep the GPS backup circuits powered
4. The JST is for a Lipo battery
5. Their is a 1.8M/3.3M VCC voltage divider to monitor the LIPO, with a 0.1uF capacitor - see [Jeelabs post here](https://jeelabs.org/2013/05/16/measuring-the-battery-without-draining-it/)
6. Terminal Connector is for a simple Bilge switch for the Moteino to monitor
7. Terminal Connector for a Button
8. Terminal Connector for an LED
9. Terminal Connector for a DS18B20 Temp probe powered from a GPIO pin
10. Terminal Connector 12V-24V VCC input
11. A 27M/3.3M voltage divider to measure 30+V on an ADC pin
12. Headers for Fona GSM module
13. Terminal Connector for a 5v cable to connect to the Fona USB charge port
14. There is a jumper to measure the uCurrent the board uses from the LIPO, and also by-pass the switching (aka an on/off switch)
15. There is a jumper to measure the uCurrent the board uses from VCC, and also by-pass the switching (aka an on/off switch)
16. Voltage regulator uses a [holtek HT7463A](http://www.holtek.com/documents/10179/116711/HT7463A_Bv130.pdf)

... What's missing?

No thread is complete without pictures...

![Eagle Schematic](https://raw.githubusercontent.com/gregcope/ABoatMon/master/eagle/ABoatMon-sch.png "Eagle Schematic")

![Eagle Board](https://raw.githubusercontent.com/gregcope/ABoatMon/master/eagle/ABoatMon-brd.png "Eagle Board")
