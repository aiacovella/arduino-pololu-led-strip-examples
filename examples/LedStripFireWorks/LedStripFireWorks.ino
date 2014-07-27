/* LedStripRainbow: Example Arduino sketch that shows
 * how to make a moving rainbow pattern on an
 * Addressable RGB LED Strip from Pololu.
 *
 * To use this, you will need to plug an Addressable RGB LED
 * strip from Pololu into pin 12.  After uploading the sketch,
 * you should see a moving rainbow.
 */
 
#include <PololuLedStrip.h>
#include "Utils.h"
#include "Sequences.h"


// Create an ledStrip object on pin 12.

//PololuLedStrip<12> ledStrip;

void setup()
{
  
  Serial.begin(9600);        // set up Serial at 9600 bps
  
}

void loop()
{
  
//  flareSequence();
//    rgb_color colors[LED_COUNT];
//  
//    byte flareCount = 8;
//
//    // Update the colors.
//    
//    for (byte cycle = 0; cycle < LED_COUNT + flareCount; cycle ++) {
//      byte pos = 0;
//      
//      // fill any front padding with off
//      for(byte i = 0; i < LED_COUNT; i++) {
//        colors[i] = hsvToRgb(0, 0, 0);
//      }
//
//
//      int rLevel = 250;
//      int gLevel = 200;
//      int bLevel = 4; 
//
//      rgb_color color;
//
//
//      for(int i = cycle - flareCount; i <= flareCount - (flareCount - cycle ) ; i++) {
//        color.red = rLevel;
//        color.green = gLevel;
//        color.blue = bLevel;
//        colors[i] = color;
//        
//        if (gLevel >= 51){
//          gLevel -= 50;
//        }
//        else {
//          gLevel = 0;
//        }
//        
//      
//    }
//
//      // Write the colors to the LED strip.
//      ledStrip.write(colors, LED_COUNT);  
//      delay(70);
//    }
//  delay(1);
}
