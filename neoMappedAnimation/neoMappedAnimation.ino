#include <Adafruit_NeoPixel.h>
#include "frames.h"
Adafruit_NeoPixel strip(64, 6);

int colors[5][3]{
  {0, 0, 0}, //black
  {255, 0, 0}, //red
  {0, 255, 0}, //green
  {0, 0, 255}, //blue
  {255, 255, 255} //white
  };

int whichFrame = 0;

void setup() {
strip.begin();
strip.clear();
strip.setBrightness(5);
}

void loop() {
  for (int i = 0; i < strip.numPixels(); i++){
    int whichColor = animation[whichFrame][i];
    
    int red = colors[whichColor][0];
    int green = colors[whichColor][1];
    int blue = colors[whichColor][2];
  strip.setPixelColor(i, red, green, blue);
  }
  strip.show();
  whichFrame = (whichFrame + 1) % 4;
  delay(500);
  
}
