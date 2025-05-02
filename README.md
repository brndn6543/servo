# servo
A demonstration showing an Arduino board powering and controlling a servo motor. The motor starts at a 1 degree rotation and then it is doubled.

**Watch on YouTube**

[![Watch on YouTube](https://i.postimg.cc/y8xZnvxR/mqdefault.jpg)](https://youtu.be/IKUV21Din5s)

## Wiring

![](https://i.postimg.cc/cJqLYmn0/servo.png)

- **Brown**
  - This is the servo's GND.
- **Red**
  - This is the servo's power.
- **Orange**
  - This is the servo's signal.

## Libraries
The software required the Arduino `Servo` library.
You can install by either adding the following line to your
*platform.ini* file and rebuilding the project:

`lib_deps = arduino-libraries/Servo`

Or, you can add the code manually from this repository:

https://github.com/arduino-libraries/Servo