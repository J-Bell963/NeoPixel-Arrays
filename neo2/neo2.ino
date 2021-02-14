#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip(64, 6);

int colors[1][3]{
  {255, 0, 0}, //red

  };

int whichColor = 0;

void setup() {
strip.begin();
strip.clear();
strip.setBrightness(25);
}

void loop() {
  for (int i = 0; i < strip.numPixels(); i++){
    int red = colors[whichColor][0];
    int green = colors[whichColor][1];
    int blue = colors[whichColor][2];
  strip.setPixelColor(i, red, green, blue);
  }
  strip.show();

  
}
