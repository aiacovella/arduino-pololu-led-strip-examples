
#include <PololuLedStrip.h>;

// Create a buffer for holding X number of colors. Takes 180 bytes.
#define LED_COUNT 60

//#define PololuLedStrip<12> ledStrip;




// Converts hue, saturation and value to RGB
rgb_color hsvToRgb(uint16_t h, uint8_t s, uint8_t v);

