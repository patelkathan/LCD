/*
  LiquidCrystal Library - Autoscroll

This sketch demonstrates the use of the autoscroll()
 and noAutoscroll() functions to make new text scroll or not.

 The circuit:
 * LCD RS pin to digital pin 6
 * LCD Enable pin to digital pin 7
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Written by Kathan Patel.

 This example code is in the public domain.

 http://www.blog.sco-ries.net/

 */

// include the library code:
#include <LiquidCrystal.h>
int thic=0;
int thic2=-1;

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(6, 7, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  // set the cursor to (0,0):
  
  // print from 0 to 9:
  for (int thisChar = 0; thisChar < 10; thisChar++) {
    if(thisChar==0 || thisChar==2|| thisChar==4|| thisChar==6|| thisChar==8)
    {
    lcd.setCursor(thic2+1, 0);
    lcd.print(thisChar);
    thic++;
    thic2++;
    
    }else{
      
      lcd.setCursor(16-thic, 1);
      lcd.print(thisChar);
      
      }
    delay(500);
  }

}
