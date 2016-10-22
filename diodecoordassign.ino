//The values below are not important for and should not be changed as "normal" user
#include <Adafruit_NeoPixel.h> 
#define MAXX 14
#define MAXY 8
#define PIN 6
int result;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(MAXX*MAXY, PIN, NEO_GRB + NEO_KHZ800);
void coordlight(int xcoord, int ycoord, int rgb1, int rgb2, int rgb3)
{
   if (xcoord%2==0)
   {
 	  result= ycoord + xcoord * MAXY;
   }
   else
   {
 	  result = (MAXY - ycoord - 1) + xcoord * MAXY;
   }
    	  strip.setPixelColor(result, rgb1, rgb2, rgb3); 
 	  Serial.print("result: "); 
 	  Serial.println(result);
}
//to use the coordlight function, type: coordlight(xcoordinate, ycoordinate, rgbvalue 1, rgbvalue 2, rgbvalue 3);

//you are allowed to change the code below
void setup()
{
	//setup code here
}
void loop()
{
	//looped code here
       coordlight(0,0, 255, 255, 255);
       coordlight(0,1, 255, 255, 255);
}
