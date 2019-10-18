#include <Arduino.h>
#include <SD.h>                      // need to include the SD library
#define SD_ChipSelectPin 4    // using digital pin 4 on arduino nano 328, can use other pins
#include <TMRpcm.h>           //  also need to include this library...
#include <SPI.h>

TMRpcm tmrpcm;   // create an object for use in this sketch

#define BUTTON  6

void setup(){
  randomSeed(analogRead(0));

  pinMode(BUTTON, INPUT_PULLUP);

  tmrpcm.speakerPin = 9;

  Serial.begin(9600);
  if (!SD.begin(SD_ChipSelectPin)) {  // see if the card is present and can be initialized:
    Serial.println("SD fail");  
    return;   // don't do anything more if not
  } else {   
    Serial.println("SD ok");   
  }

  tmrpcm.setVolume(5);    // 7 too much - audio distortion bad - max 5
  tmrpcm.quality(0);      // no effect
}

void loop(){ 
  while(digitalRead(BUTTON) == LOW){
    Serial.println("pressed");

    int x = random(1, 9); // max number songs + 1, leater number

    String temp = "";
    temp += x;
    temp += ".wav";

    char* p = const_cast<char*>(temp.c_str());

    Serial.println(p);

    tmrpcm.play(p);

    while(tmrpcm.isPlaying()){  // is still playing?
      delay(500);
    };
  }
}