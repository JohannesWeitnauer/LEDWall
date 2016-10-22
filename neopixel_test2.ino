

#include <Adafruit_NeoPixel.h>


 
          #define PIN 6
     #define MAXX 6
     #define MAXY 8
    // Parameter 1 = number of pixels in strip
    // Parameter 2 = pin number (most are valid)
    // Parameter 3 = pixel type flags, add together as needed:
    //   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
    //   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
    //   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
    //   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
    Adafruit_NeoPixel strip = Adafruit_NeoPixel(MAXX*MAXY, PIN, NEO_GRB + NEO_KHZ800);
     
     void setpixelxy (int x, int y, int R, int G, int B) {
      int lednumber;
       if (x%2==0)lednumber= y+x*MAXY; 
       else lednumber= (MAXY-y-1)+x*MAXY;
         strip.setPixelColor(lednumber, R, G, B); 
        
         Serial.print(lednumber); 
         Serial.print(" ");
     }
     
void setup() {
  // put your setup code here, to run once:
  strip.begin(); 
  strip.setBrightness(45);
  strip.show(); // Initialize all pixels to 'off'

   Serial.begin(9600); 
    for(int x=0;x< MAXX;x++){
      for(int y=0;y< MAXY;y++){
        setpixelxy (x,y, 255, 21, 201);
       
      }
      Serial.println(" ");
    }
  
}
void loop() {
  // put your main code here, to run repeatedly:

  
   strip.setPixelColor(0, 255, 21, 201);
   strip.setPixelColor(1, 0, 255, 0);
   strip.setPixelColor(1, 255, 21, 201);

  strip.show();

     



//delay(0);

  

}

