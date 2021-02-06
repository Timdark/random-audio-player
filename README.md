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

<img src=“RAP_bb.jpg” width="200" height="200">

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
