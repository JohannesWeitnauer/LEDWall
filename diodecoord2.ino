#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip = Adafruit_NeoPixel(112, 6, NEO_GRB + NEO_KHZ800);
int counter = 0;
void setup()
{
	strip.begin();
	strip.setBrightness(45);
	strip.show();
}
void loop()
{
  //sollte alle LEDs von 0 bis 112 mit minimalem delay anschalten
	while(counter <= 112)
	{
		strip.setPixelColor(counter, 255, 255, 255);
		delay(40);
		counter += 1;
	}
}
