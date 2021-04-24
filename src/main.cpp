#include <Arduino.h>
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>


// GUItool: begin automatically generated code
AudioSynthWaveform       waveform1;      //xy=265,233.75
AudioOutputI2S           i2s1;           //xy=619,276
AudioConnection          patchCord1(waveform1, 0, i2s1, 0);
AudioConnection          patchCord2(waveform1, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=641.0000152587891,216.75000667572021
// GUItool: end automatically generated code

void setup() 
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  AudioMemory(20);   
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.6);
  waveform1.begin(WAVEFORM_SAWTOOTH);
  waveform1.amplitude(0.75);
  waveform1.frequency(50.00);
  waveform1.pulseWidth(0.15);
  
}

void loop()
{
  // digitalWrite(13, HIGH);
  // delay(300);
  // digitalWrite(13, LOW);
  // delay(300);
  for(int freq = 50; freq <=500; freq++) {
    waveform1.frequency(freq);
    delay(10);
  }
  
}