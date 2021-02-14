#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip(64, 6);

int colors[2][3]{
  {255, 0, 0}, //red
  {0, 0, 0} //black
  };

int whichColor = 0;
int left = 0;
int right = 8;
int start = 0;

void setup() {
strip.begin();
strip.clear();
strip.setBrightness(25);
}

void loop() {
  for (int j = 0; j < 7; j++){
  for (int i = start;i < right; i = i + 2){
    int red = colors[whichColor][0];
    int green = colors[whichColor][1];
    int blue = colors[whichColor][2];
  strip.setPixelColor(i, red, green, blue);
    start = (start + 1) % 2;
    left = right;
    right = right + 8;
  }

  }
  strip.show();

  
}
