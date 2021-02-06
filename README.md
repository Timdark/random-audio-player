### Random audio player

Player system plays wav files from sd card randomly. Project is coded using VS code.

## Features

- Plays .wav files randomly from sd card
- Small physical size

## Hardware

- Arduino Nano
- Speaker
- Mono amplifier
- SD card reader
- Wires, button and switch
- Case

## Schematics pic

<img align="left" width="100" height="100" src=“https://user-images.githubusercontent.com/32216377/107125233-52a55880-68b1-11eb-9156-35a402430806.jpg” />

## Arduino Nano pins

- D6      Button
- D9      AMP +
- Vin     Power
- GND     GND
- D4      CS
- D11     MOSI
- D12     MISO
- D13     SCK

## Libraries

- TMRpcm library https://github.com/TMRh20/TMRpcm
- Arduino & SPI library
- SD library
