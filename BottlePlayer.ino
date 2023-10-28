#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif
#define PIN        10
#define NUMPIXELS 8
Adafruit_NeoPixel strip(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
#define DELAYVAL 500
#define NUMBOTTLES 8

int score1Length = 1112;
const PROGMEM byte score1 [] = {
0x90,68,80, 0,250, 0x90,72,70, 0,250, 0x90,75,70, 0,250, 0x90,79,70, 0,250, 0x91,68,80, 0x80, 0,250, 
0x90,72,70, 0x81, 0,250, 0x90,75,70, 0,250, 0x90,79,70, 0,250, 0x91,68,80, 0x80, 0,250, 0x90,72,70, 0x81, 
0,250, 0x90,75,70, 0,250, 0x90,79,70, 0,250, 0x91,68,80, 0x80, 0,250, 0x90,72,70, 0x81, 0,250, 0x90,75,70, 
0,250, 0x90,79,70, 0,250, 0x91,63,105, 0x92,70,91, 0x93,77,91, 0x80, 0,250, 0x90,74,70, 0x81, 0x82, 0x83, 0,250, 
0x90,75,70, 0,250, 0x90,79,70, 0,250, 0x91,63,80, 0x80, 0,250, 0x90,74,70, 0x81, 0,250, 0x90,75,70, 0,250, 
0x90,79,70, 0,250, 0x91,63,80, 0x80, 0,250, 0x90,74,70, 0x81, 0,250, 0x90,75,70, 0,250, 0x90,77,70, 0,250, 
0x91,63,80, 0x80, 0,250, 0x90,74,70, 0x81, 0,250, 0x90,75,70, 0,250, 0x90,77,70, 0,250, 0x91,68,80, 0x92,70,88, 
0x80, 0,250, 0x90,72,70, 0x81, 0x82, 0,250, 0x90,75,70, 0,250, 0x90,77,70, 0,250, 0x91,68,80, 0x80, 0,250, 
0x90,72,70, 0x81, 0,250, 0x90,75,70, 0,250, 0x90,77,70, 0,250, 0x91,68,80, 0x80, 0,250, 0x90,72,70, 0x81, 
0,250, 0x90,75,70, 0,250, 0x90,79,70, 0,250, 0x91,68,80, 0x80, 0,250, 0x90,72,70, 0x81, 0,250, 0x90,75,70, 
0,250, 0x90,79,70, 0,250, 0x91,63,80, 0x92,77,70, 0x80, 0,250, 0x90,74,70, 0x81, 0x82, 0,250, 0x90,75,70, 
0,250, 0x90,79,70, 0,250, 0x91,63,80, 0x80, 0,250, 0x90,74,70, 0x81, 0,250, 0x90,75,70, 0,250, 0x90,79,70, 
0,250, 0x91,63,80, 0x80, 0,250, 0x90,74,70, 0x81, 0,250, 0x90,75,70, 0,250, 0x90,79,70, 0,250, 0x91,63,80, 
0x80, 0,250, 0x90,74,70, 0x81, 0,250, 0x90,75,70, 0,250, 0x90,79,70, 0,250, 0x91,72,83, 0x90,79,88, 0,250, 
0x91,72,70, 0x80, 0,250, 0x90,75,70, 0x81, 0,250, 0x90,79,70, 0,250, 0x91,72,83, 0x80, 0,250, 0x90,72,70, 
0x81, 0,250, 0x90,75,70, 0,250, 0x90,79,70, 0,250, 0x91,72,83, 0x80, 0,250, 0x90,72,70, 0x81, 0,250, 0x90,75,70, 
0,250, 0x90,79,70, 0,250, 0x91,72,83, 0x80, 0,250, 0x90,72,70, 0x81, 0,250, 0x91,70,88, 0x90,75,70, 0,250, 
0x90,79,70, 0x81, 0,250, 0x91,68,80, 0x92,77,88, 0x80, 0,250, 0x90,72,70, 0x81, 0x82, 0,250, 0x90,75,70, 0,250, 
0x90,77,70, 0,250, 0x91,68,80, 0x80, 0,250, 0x90,72,70, 0x81, 0,250, 0x90,75,70, 0,250, 0x90,77,70, 0,250, 
0x91,68,80, 0x80, 0,250, 0x90,72,70, 0x81, 0,250, 0x90,75,70, 0,250, 0x90,77,70, 0,250, 0x91,68,80, 0x80, 
0,250, 0x90,72,70, 0x81, 0,250, 0x90,75,70, 0,250, 0x90,79,70, 0,250, 0x91,63,80, 0x92,75,90, 0x93,77,90, 
0x90,79,90, 0,250, 0x91,74,70, 0x80, 0x82, 0x83, 0,250, 0x90,75,70, 0x81, 0,250, 0x90,79,70, 0,250, 0x91,63,80, 
0x80, 0,250, 0x90,74,70, 0x81, 0,250, 0x90,79,70, 0,250, 0x91,75,70, 0x80, 0,250, 0x90,63,80, 0x81, 0,250, 
0x90,74,70, 0,250, 0x90,75,70, 0,250, 0x90,79,70, 0,250, 0x91,63,80, 0x80, 0,250, 0x90,74,70, 0x81, 0,250, 
0x90,79,70, 0,250, 0x91,75,70, 0x80, 0,250, 0x90,70,80, 0x91,77,70, 0,250, 0x90,74,70, 0x81, 0,250, 0x90,75,70, 
0,250, 0x90,77,70, 0,250, 0x91,70,80, 0x80, 0,250, 0x90,74,70, 0x81, 0,250, 0x90,79,70, 0,250, 0x91,74,70, 
0x80, 0,250, 0x90,70,80, 0x81, 0,250, 0x90,74,70, 0,250, 0x90,75,70, 0,250, 0x90,77,70, 0,250, 0x91,70,80, 
0x80, 0,250, 0x90,74,70, 0x81, 0,250, 0x90,79,70, 0,250, 0x91,74,70, 0x80, 0,250, 0x90,72,83, 0x91,75,88, 
0x92,79,88, 0,250, 0x90,72,70, 0x81, 0x82, 0,250, 0x90,75,70, 0,250, 0x90,77,70, 0,250, 0x91,72,83, 0x80, 
0,250, 0x90,72,70, 0x81, 0,250, 0x90,75,70, 0,250, 0x90,77,70, 0,250, 0x91,72,83, 0x80, 0,250, 0x90,72,70, 
0x81, 0,250, 0x90,75,70, 0,250, 0x90,77,70, 0,250, 0x91,72,83, 0x80, 0,250, 0x90,72,70, 0x81, 0,250, 0x90,75,88, 
0x91,79,88, 0,250, 0x90,79,70, 0x81, 0,250, 0x91,68,80, 0x92,72,88, 0x93,77,88, 0x80, 0,250, 0x90,72,70, 
0x81, 0x82, 0x83, 0,250, 0x90,75,70, 0,250, 0x90,79,70, 0,250, 0x91,68,80, 0x80, 0,250, 0x90,72,70, 0x81, 0,250, 
0x90,75,70, 0,250, 0x90,79,70, 0,250, 0x91,68,80, 0x80, 0,250, 0x90,72,70, 0x81, 0,250, 0x90,75,70, 0,250, 
0x90,79,70, 0,250, 0x91,68,80, 0x80, 0,250, 0x90,72,70, 0x81, 0,250, 0x90,75,70, 0x91,79,70, 0,250, 0x90,77,70, 
0x81, 0,250, 0x91,63,80, 0x92,75,90, 0x90,79,90, 0,250, 0x91,74,70, 0x80, 0x82, 0,250, 0x90,75,70, 0x81, 0,250, 
0x90,79,70, 0,250, 0x91,63,80, 0x80, 0,250, 0x90,74,70, 0x81, 0,250, 0x90,79,70, 0,250, 0x91,75,70, 0x80, 
0,250, 0x90,63,80, 0x81, 0,250, 0x90,74,70, 0,250, 0x90,75,70, 0,250, 0x90,79,70, 0,250, 0x91,63,80, 
0x80, 0,250, 0x90,74,70, 0x81, 0,250, 0x91,70,70, 0x90,75,70, 0x92,79,70, 0,250, 0x90,75,70, 0x81, 0x82, 0,250, 
0x91,70,80, 0x92,74,90, 0x90,77,70, 0,250, 0x91,74,70, 0x80, 0x82, 0,250, 0x90,75,70, 0x81, 0,250, 0x90,79,70, 
0,250, 0x91,70,80, 0x80, 0,250, 0x90,74,70, 0x81, 0,250, 0x90,79,70, 0,250, 0x91,75,70, 0x80, 0,250, 0x90,70,80, 
0x92,74,70, 0x91,77,90, 0,250, 0x80, 0x81, 0x82, 0xF0};

int score2Length = 1428;
const PROGMEM byte score2 [] = {
// ?
0x90,68,100, 0x91,72,100, 0x92,75,100, 0x93,79,100, 0,250, 0x80, 0x81, 0x82, 0x83, 0,125, 0x90,68,100, 0x91,72,100, 
0x92,75,100, 0x93,79,100, 0,250, 0x80, 0x81, 0x82, 0x83, 0,125, 0x90,68,100, 0x91,72,100, 0x92,75,100, 0x93,79,100, 
0,250, 0x80, 0x81, 0x82, 0x83, 0,250, 0x90,68,100, 0x91,72,100, 0x92,75,100, 0x93,79,100, 0,250, 0x80, 0x81, 0x82, 0x83, 
0,125, 0x90,68,100, 0x91,72,100, 0x92,75,100, 0x93,79,100, 0,250, 0x80, 0x81, 0x82, 0x83, 0,125, 0x90,68,100, 0x91,72,100, 
0x92,75,100, 0x93,79,100, 0,250, 0x80, 0x81, 0x82, 0x83, 0,125, 0x90,68,100, 0x91,72,100, 0x92,75,100, 0x93,79,100, 
0,250, 0x80, 0x81, 0x82, 0x83, 0,125, 0x90,68,100, 0x91,72,100, 0x92,75,100, 0x93,79,100, 0,250, 0x80, 0x81, 0x82, 0x83, 
0,250, 0x90,68,100, 0x91,72,100, 0x92,75,100, 0x93,79,100, 0,250, 0x80, 0x81, 0x82, 0x83, 0,125, 0x90,68,100, 0x91,72,100, 
0x92,75,100, 0x93,79,100, 0,250, 0x80, 0x81, 0x82, 0x83, 0,125, 0x90,63,100, 0x91,70,100, 0x92,75,100, 0x93,77,100, 
0,250, 0x80, 0x81, 0x82, 0x83, 0,125, 0x90,63,100, 0x91,70,100, 0x92,75,100, 0x93,77,100, 0,250, 0x80, 0x81, 0x82, 0x83, 
0,125, 0x90,63,100, 0x91,70,100, 0x92,75,100, 0x93,77,100, 0,250, 0x80, 0x81, 0x82, 0x83, 0,250, 0x90,63,100, 0x91,70,100, 
0x92,75,100, 0x93,77,100, 0,250, 0x80, 0x81, 0x82, 0x83, 0,125, 0x90,63,100, 0x91,70,100, 0x92,75,100, 0x93,77,100, 
0,250, 0x80, 0x81, 0x82, 0x83, 0,125, 0x90,63,100, 0x91,70,100, 0x92,75,100, 0x93,77,100, 0,250, 0x80, 0x81, 0x82, 0x83, 
0,125, 0x90,63,100, 0x91,70,100, 0x92,75,100, 0x93,77,100, 0,250, 0x80, 0x81, 0x82, 0x83, 0,125, 0x90,63,100, 0x91,70,100, 
0x92,75,100, 0x93,77,100, 0,250, 0x80, 0x81, 0x82, 0x83, 0,250, 0x90,63,100, 0x91,70,100, 0x92,75,100, 0x93,77,100, 
0,250, 0x80, 0x81, 0x82, 0x83, 0,125, 0x90,63,100, 0x91,70,100, 0x92,75,100, 0x93,77,100, 0,250, 0x80, 0x81, 0x82, 0x83, 
0,125, 0x90,68,100, 0x91,72,100, 0x92,75,100, 0x93,79,100, 0,125, 0x94,70,100, 0,125, 0x90,75,100, 0x81, 0x82, 
0x83, 0x84, 0,125, 0x91,68,100, 0x92,70,100, 0x93,72,100, 0x90,75,100, 0x94,79,100, 0,125, 0x92,77,100, 0,125, 
0x90,79,100, 0x81, 0x82, 0x83, 0x84, 0,125, 0x91,68,100, 0x92,72,100, 0x93,75,100, 0x94,77,100, 0x90,79,100, 0,125, 
0x93,75,100, 0x84, 0,125, 0x80, 0x81, 0x82, 0x83, 0,250, 0x90,68,100, 0x91,72,100, 0x92,75,100, 0x93,79,100, 0,250, 
0x80, 0x81, 0x82, 0x83, 0,125, 0x90,68,100, 0x91,72,100, 0x92,75,100, 0x93,79,100, 0,250, 0x80, 0x81, 0x82, 0x83, 0,125, 
0x90,68,100, 0x91,72,100, 0x92,75,100, 0x93,79,100, 0,125, 0x94,70,100, 0,125, 0x90,75,100, 0x81, 0x82, 0x83, 0x84, 
0,125, 0x91,68,100, 0x92,70,100, 0x93,72,100, 0x90,75,100, 0x94,79,100, 0,125, 0x92,77,100, 0,125, 0x90,79,100, 
0x81, 0x82, 0x83, 0x84, 0,125, 0x91,68,100, 0x92,72,100, 0x93,75,100, 0x94,77,100, 0x90,79,100, 0,125, 0x93,75,100, 
0x84, 0,125, 0x80, 0x81, 0x82, 0x83, 0,250, 0x90,68,100, 0x91,72,100, 0x92,75,100, 0x93,79,100, 0,250, 0x80, 0x81, 0x82, 
0x83, 0,125, 0x90,68,100, 0x91,72,100, 0x92,75,100, 0x93,79,100, 0,250, 0x80, 0x81, 0x82, 0x83, 0,125, 0x90,63,100, 
0x91,70,100, 0x92,75,100, 0x93,77,100, 0,125, 0x91,70,100, 0,125, 0x90,75,100, 0x81, 0x82, 0x83, 0,125, 0x91,63,100, 
0x92,70,100, 0x90,75,100, 0x93,77,100, 0,125, 0x93,77,100, 0,125, 0x90,79,100, 0x81, 0x82, 0x83, 0,125, 0x91,63,100, 
0x92,70,100, 0x93,75,100, 0x94,77,100, 0x80, 0,125, 0x90,75,100, 0x83, 0x84, 0,125, 0x80, 0x81, 0x82, 0,250, 0x90,63,100, 
0x91,70,100, 0x92,75,100, 0x93,77,100, 0,250, 0x80, 0x81, 0x82, 0x83, 0,125, 0x90,63,100, 0x91,70,100, 0x92,75,100, 
0x93,77,100, 0,250, 0x80, 0x81, 0x82, 0x83, 0,125, 0x90,63,100, 0x91,70,100, 0x92,75,100, 0x93,77,100, 0,125, 0x91,70,100, 
0,125, 0x90,75,100, 0x81, 0x82, 0x83, 0,125, 0x91,63,100, 0x92,70,100, 0x90,75,100, 0x93,77,100, 0,125, 0x93,77,100, 
0,125, 0x90,79,100, 0x81, 0x82, 0x83, 0,125, 0x91,63,100, 0x92,70,100, 0x93,75,100, 0x94,77,100, 0x80, 0,125, 0x90,75,100, 
0x83, 0x84, 0,125, 0x80, 0x81, 0x82, 0,250, 0x90,63,100, 0x91,70,100, 0x92,75,100, 0x93,77,100, 0,250, 0x80, 0x81, 0x82, 
0x83, 0,125, 0x90,63,100, 0x91,70,100, 0x92,75,100, 0x93,77,100, 0,250, 0x80, 0x81, 0x82, 0x83, 0,125, 0x90,68,100, 
0x91,72,100, 0x92,75,100, 0x93,79,100, 0,125, 0x94,70,100, 0,125, 0x90,75,100, 0x81, 0x82, 0x83, 0x84, 0,125, 0x91,68,100, 
0x92,70,100, 0x93,72,100, 0x90,75,100, 0x94,79,100, 0,125, 0x92,77,100, 0,125, 0x90,79,100, 0x81, 0x82, 0x83, 0x84, 
0,125, 0x91,68,100, 0x92,72,100, 0x93,75,100, 0x94,77,100, 0x90,79,100, 0,125, 0x93,75,100, 0x84, 0,125, 0x91,72,100, 
0x80, 0x82, 0x83, 0,125, 0x81, 0,125, 0x90,68,100, 0x91,72,100, 0x92,75,100, 0x93,79,100, 0,250, 0x80, 0x81, 0x82, 0x83, 
0,125, 0x90,68,100, 0x91,72,100, 0x92,75,100, 0x93,79,100, 0,250, 0x80, 0x81, 0x82, 0x83, 0,125, 0x90,68,100, 0x91,72,100, 
0x92,75,100, 0x93,79,100, 0,125, 0x94,70,100, 0,125, 0x90,75,100, 0x81, 0x82, 0x83, 0x84, 0,125, 0x91,68,100, 0x92,70,100, 
0x93,72,100, 0x90,75,100, 0x94,79,100, 0,125, 0x92,77,100, 0,125, 0x90,79,100, 0x81, 0x82, 0x83, 0x84, 0,125, 0x91,68,100, 
0x92,72,100, 0x93,75,100, 0x94,77,100, 0x90,79,100, 0,125, 0x93,75,100, 0x84, 0,125, 0x80, 0x81, 0x82, 0x83, 0,125, 
0x90,77,100, 0,125, 0x91,68,100, 0x92,72,100, 0x93,75,100, 0x90,79,100, 0,125, 0x94,77,100, 0,125, 0x80, 0x81, 
0x82, 0x83, 0x84, 0,125, 0x90,68,100, 0x91,72,100, 0x92,75,100, 0x93,79,100, 0,125, 0x92,75,100, 0,125, 0x80, 0x81, 
0x82, 0x83, 0,125, 0x90,63,100, 0x91,70,100, 0x92,75,100, 0x93,77,100, 0,125, 0x91,70,100, 0,125, 0x90,75,100, 
0x81, 0x82, 0x83, 0,125, 0x91,63,100, 0x92,70,100, 0x90,75,100, 0x93,77,100, 0,125, 0x93,77,100, 0,125, 0x90,79,100, 
0x81, 0x82, 0x83, 0,125, 0x91,63,100, 0x92,70,100, 0x93,75,100, 0x94,77,100, 0x80, 0,125, 0x90,75,100, 0x83, 0x84, 0,125, 
0x80, 0x81, 0x82, 0,250, 0x90,63,100, 0x91,70,100, 0x92,75,100, 0x93,77,100, 0,250, 0x80, 0x81, 0x82, 0x83, 0,125, 0x90,63,100, 
0x91,70,100, 0x92,75,100, 0x93,77,100, 0,250, 0x80, 0x81, 0x82, 0x83, 0,125, 0x90,63,100, 0x91,70,100, 0x92,75,100, 
0x93,77,100, 0,125, 0x91,70,100, 0,125, 0x90,75,100, 0x81, 0x82, 0x83, 0,125, 0x91,63,100, 0x92,70,100, 0x90,75,100, 
0x93,77,100, 0,125, 0x93,77,100, 0,125, 0x90,79,100, 0x81, 0x82, 0x83, 0,125, 0x91,63,100, 0x92,70,100, 0x93,75,100, 
0x94,77,100, 0x80, 0,125, 0x90,75,100, 0x83, 0x84, 0,125, 0x80, 0x81, 0x82, 0,125, 0x90,77,100, 0,125, 0x91,63,100, 
0x92,70,100, 0x93,75,100, 0x90,77,100, 0,125, 0x90,77,100, 0,125, 0x80, 0x81, 0x82, 0x83, 0,125, 0x90,63,100, 0x91,70,100, 
0x92,77,100, 0,125, 0x93,75,100, 0,125, 0x80, 0x81, 0x82, 0x83, 0xF0};

int note63 = 2;
int note68 = 3;
int note70 = 4;
int note72 = 5;
int note74 = 6;
int note75 = 9; //Pin 7 is actually G6
int note77 = 8;
int note79 = 7; // Pin 9 is actually D#6

int volumeSliderPin = A0; // Volume slider pin
int volume = 0;
int powerPin = 11;
int nextPin = 12;
bool powerButtonIsOn = false;
bool nextButtonIsPressed = false;
bool prevNextButtonState = false;

int availableNotes[8] = {63, 68, 70, 72, 74, 75, 77, 79};

int songId = 0;
int nSongs = 2;

void updateVolumeSlider()
{
  volume = 1023-analogRead(volumeSliderPin);
}

void setup() {
  for(int i=2;i<10;) pinMode(i++,OUTPUT);
  pinMode(volumeSliderPin, INPUT); // Volume slider
  pinMode(powerPin, INPUT_PULLUP);
  pinMode(nextPin, INPUT_PULLUP);
  Serial.begin(9600);
  strip.begin();
  strip.clear();
  updateVolumeSlider();
  strip.setBrightness(255);
  strip.show(); // Initialize all pixels to 'off'
}

byte instruction;
int iterator;

byte getNextInstruction(){
  byte instruction;
  int scoreLength;
  if (songId == 0)
  {
    instruction = pgm_read_byte(&score1[iterator]);
    scoreLength = score1Length;
  }
  if (songId == 1)
  {
    instruction = pgm_read_byte(&score2[iterator]);
    scoreLength = score2Length;
  }

  if (iterator < scoreLength)
  {
    iterator = iterator + 1;
  }
  else
  {
    iterator = 0;
  }
  return instruction;
}

void lightBottle(int bottleId)
{
  strip.setBrightness(255);
  int pixelHue = (bottleId * 65536L / NUMBOTTLES); 
  strip.setPixelColor(bottleId, strip.gamma32(strip.ColorHSV(pixelHue)));
  strip.show();
}

void clearAllBottleLights()
{
  strip.clear();
}

void hitBottle(int pin, int velocity)
{
  digitalWrite(pin, HIGH);
  delayMicroseconds(int(map(velocity, 0, 255, 3500+volume, 5000+volume*5)));
  digitalWrite(pin, LOW);
}

uint8_t getOutputPinForMidiNote(byte note)
{
  if (note == 63) {return note63;}
  else if(note == 68) {return note68;} 
  else if(note == 70) {return note70;} 
  else if(note == 72) {return note72;}
  else if(note == 74) {return note74;}
  else if(note == 75) {return note75;}
  else if(note == 77) {return note77;}
  else if(note == 79) {return note79;}
  else 
  {
    Serial.println("Wrong note requested! Note:");
    Serial.println(note);
    return 0;
  }
}

int getBottleIdForMidiNote(byte note)
{
  if (note == 63) {return 4;}
  else if(note == 68) {return 5;} 
  else if(note == 70) {return 6;} 
  else if(note == 72) {return 7;}
  else if(note == 74) {return 0;}
  else if(note == 75) {return 1;}
  else if(note == 77) {return 2;}
  else if(note == 79) {return 3;}
  else 
  {
    Serial.println("Wrong note requested! Note:");
    Serial.println(note);
    return 0;
  }
}

void playNote(byte note, byte velocity)
{
  int bottle = getBottleIdForMidiNote(note);
  lightBottle(bottle);

  uint8_t pin = getOutputPinForMidiNote(note);
  hitBottle(pin, velocity);

  clearAllBottleLights();
}
  
void handleNextSongButton()
{
  nextButtonIsPressed = !digitalRead(nextPin);
  if(nextButtonIsPressed & !prevNextButtonState)
  {
    Serial.println("next song!");
    if (songId < nSongs -1)
    {
      songId = songId + 1;
    }
    else
    {
      songId = 0;
    }
    iterator = 0;
  }
  prevNextButtonState = nextButtonIsPressed;
}

bool powerIsOn()
{
  powerButtonIsOn = !digitalRead(powerPin);
  if(!powerButtonIsOn)
  {
    iterator = 0;
    return false;
  }
  else
  {
    return true;
  }
}

void handleInstruction(byte instruction)
{
  if (instruction == 0x90 || instruction == 0x91 || instruction == 0x92 || instruction == 0x93 || instruction == 0x94) 
  {
    // New note instruction. Only implemented for max 5 channels
    byte note = getNextInstruction();
    byte velocity = getNextInstruction();
    playNote(note, velocity);
  }
  else if (instruction == 0 || instruction == 1)
  {
    // Delay instruction
    delay(int(getNextInstruction())); 
    updateVolumeSlider(); // No power supply capacitor, so only read this when not hitting notes
  }
  else if (instruction == 0x80 || instruction == 0x81 || instruction == 0x82 || instruction == 0x83 || instruction == 0x84)
  {
    // Stop note instruction. Not needed since we're playing bottles
  }
  else if (instruction == 0xF0)
  {
    // End of song instruction. No delay after last note, so add manual delay for looping.
    delay(2000);
  }
}

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if(WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}

void rainbow(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256; j++) {
    for(i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel((i+j) & 255));
    }
    strip.show();
    if(!powerIsOn())
    {
      delay(wait);
    }
    else
    {
      clearAllBottleLights();
      return;
    }
  }
}

void loop() {
  handleNextSongButton();
  if(powerIsOn())
  {
    byte instruction = getNextInstruction();
    handleInstruction(instruction);
    
    /*
    //TEST CODE INDIVIDUAL NOTES
    if (note == 63) {return 0;}     // D#4 311.1 Hz --> D#6 1244.51 Hz
    else if(note == 68) {return 1;} // G#4 415.3 Hz --> G#5 1661.22 Hz
    else if(note == 70) {return 2;} // A#4 466.2 Hz --> 
    else if(note == 72) {return 3;} // C5 523.3 Hz
    else if(note == 74) {return 4;} // D5 587.3 Hz
    else if(note == 75) {return 5;} // D#5 622.25 Hz
    else if(note == 77) {return 6;} // F5 698.5 Hz
    else if(note == 79) {return 7;} // G5 784.0 Hz
    
    
    int note = 68;
    updateVolumeSlider();
    playNote(note, volume/4);
    delay(500);

    /*
    // TEST CODE FOR ALL BOTTLES & LIGHTS & VOLUME SLIDER
    for(int i = 0; i < 8; i++)
    {
      updateVolumeSlider();

      playNote(availableNotes[i], volume/4);
      Serial.println(i);
      delay(100);
    }
    */
  }
  else
  {
    //Rainbow color effect
    strip.setBrightness(150);
    rainbow(30);
  }
}