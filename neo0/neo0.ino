#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip(64, 6);

int colors[1][3]{
  {255, 0, 0}, //red

  };

int color = 0;

void setup() {
strip.begin();
strip.clear();
strip.setBrightness(25);
}

void loop() {

    int red = colors[color][0];
    int green = colors[color][1];
    int blue = colors[color][2];
  strip.setPixelColor(0, red, green, blue);
  
  strip.show();

  

  
}
