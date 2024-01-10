# 💡💡💡 BarGraph Project 💡💡💡

## Overview
This project, developed in 2010 by students Bruno Argenton and Bruno Taglietti under the supervision of Prof. Edson dos Santos Acco at Universidade de Passo Fundo - Laboratório de Eletrônica de Potência I, involves the creation of a Bar Graph using 10 100W lamps. The project utilizes the theoretical basis of driving loads requiring mains voltage, isolated using logic circuits. The input signal is a mono audio signal processed through rectification, amplification, and level shifting for proper acquisition by the AVR ATmega328P microcontroller connected to an Arduino platform.

## Project Components
- Microcontroller: AVR ATmega328P
- Platform: Arduino Uno
- Input Signal Source: Mono Audio Signal
- Output: Bar Graph with 10 x 100W lamps

## Triggering 
The lamps are triggered using a logic circuit involving an optocoupler and a TRIAC. This circuit is replicated ten times to achieve individual control for each lamp. The optocoupler specifications and calculations for resistances are provided.

![alt text](https://github.com/brunoargenton/ArduinoBarGraph/blob/main/img/1.jpg)

## Control
The control of the lamp activations is achieved using an ATMega328P microcontroller. The Arduino Uno platform was chosen for its ease of programming and data acquisition capabilities. The Arduino Uno is powered by 12V DC, while the lamp triggering part requires 220V AC. A simple power supply structure with a transformer, full-wave rectifier, and voltage regulator is used.

![alt text](https://github.com/brunoargenton/ArduinoBarGraph/blob/main/img/3.jpg)

## Signal Processing
The input signal, being an audio signal, is amplified and rectified to convert it into a form suitable for the Arduino's analog-to-digital converter. A simple op-amp circuit with a gain of approximately 10 is used for amplification and rectification.

![alt text](https://github.com/brunoargenton/ArduinoBarGraph/blob/main/img/4.jpg)

## Data Acquisition
Real-time bar graph levels can be acquired through the serial port using MATLAB. The MATLAB script Bargraph2010.m reads and displays the data in a bar graph. This method also allows for further analysis, curve fitting, and additional graphical representation.
![alt text](https://github.com/brunoargenton/ArduinoBarGraph/blob/main/img/6.jpg)

## Arduino Code
The Arduino code (BarGraph.ino) reads the analog signal, determines the mode (Bar or Dot), maps the input to the range of 0 to 10, and controls the activation of LEDs accordingly.

## MATLAB Code
The MATLAB script (Bargraph2010.m) reads data from the Arduino through the serial port and displays a real-time bar graph. The script also allows for further analysis and curve fitting.

## Conclusion
The project successfully applies knowledge from the Power Electronics discipline. The choice of an open-source platform like Arduino provides flexibility for users to modify and enhance the project. The use of serial communication serves as an example, encouraging users to create applications according to their needs.

## Video
Watch the prototype in action on YouTube:

[![Bargraph YT](https://img.youtube.com/vi/aVo3MJKAT9g/0.jpg)](https://www.youtube.com/watch?v=aVo3MJKAT9g)


## References
- BARBI, Ivo. Conversores cc-cc isolados de alta freqüência com comutação suave. Florianópolis: Editores, 1999.
- Arduino Official Website
- MATLAB Documentation
