#include "Utils.h"

#include <PololuLedStrip.h>

PololuLedStrip<12> ledStrip;

void flareSequence(int pin){

  rgb_color colors[LED_COUNT];

  // number of leds to use in the flare
  byte flareCount = 8;

  // Update the colors.
  for (byte cycle = 0; cycle < LED_COUNT + flareCount; cycle ++) {
    byte pos = 0;

    // fill any front padding with off
    for(byte i = 0; i < LED_COUNT; i++) {
      colors[i] = hsvToRgb(0, 0, 0);
    }

    int rLevel = 250;
    int gLevel = 200;
    int bLevel = 4; 

    rgb_color color;

    for(int i = cycle - flareCount; i <= flareCount - (flareCount - cycle ) ; i++) {
      color.red = rLevel;
      color.green = gLevel;
      color.blue = bLevel;
      colors[i] = color;

      if (gLevel >= 51){
        gLevel -= 50;
      }
      else {
        gLevel = 0;
      }
    }
    // Write the colors to the LED strip.
    ledStrip.write(colors, LED_COUNT);  
    delay(70);
  }
  delay(1);

}



