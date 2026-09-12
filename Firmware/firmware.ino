#include <Adafruit_GFX.h>   
#include <Adafruit_ST7789.h> 
#include <SPI.h>


#define TFT_CS   2   
#define TFT_DC   7   
#define TFT_RST -1 

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  tft.init(170, 320); 
  
  tft.setRotation(1); 

  tft.fillScreen(ST7789_BLACK); 

  tft.setTextColor(ST7789_CYAN); 
  tft.setTextSize(4);             
  tft.setCursor(60, 65);          

  tft.println("HELLO");
}

void loop() {
    #nothing happening here 
}

