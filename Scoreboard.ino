/*********************

Example code for the Adafruit RGB Character LCD Shield and Library

This code displays text on the shield, and also reads the buttons on the keypad.
When a button is pressed, the backlight changes color.

**********************/

// include the library code:
#include <Wire.h>
#include <Adafruit_RGBLCDShield.h>
#include <utility/Adafruit_MCP23017.h>
#include <LiquidCrystal.h>
  int Boat1;
  int Boat2;
// The shield uses the I2C SCL and SDA pins. On classic Arduinos
// this is Analog 4 and 5 so you can't use those for analogRead() anymore
// However, you can connect other I2C sensors to the I2C bus and share
// the I2C bus.
Adafruit_RGBLCDShield lcd = Adafruit_RGBLCDShield();

// These #defines make it easy to set the backlight color
#define RED 0x1
#define YELLOW 0x3
#define GREEN 0x2
#define TEAL 0x6
#define BLUE 0x4
#define VIOLET 0x5
#define WHITE 0x7


void setup() {
  // Debugging output
  Serial.begin(9600);
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);

  // Print a message to the LCD. We track how long it takes since
  // this library has been optimized a bit and we're proud of it :)

  
  lcd.setBacklight(WHITE);
  Boat1 = 0;
  Boat2 = 0;
}

uint8_t i=0;
void loop() {
  lcd.setCursor(0,0);
  lcd.print("Boat1     Boat2");
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  lcd.print(Boat1);
  lcd.print("         ");
  lcd.print(Boat2);
  // print the number of seconds since reset:


  uint8_t buttons = lcd.readButtons();

  if (buttons) {
    lcd.clear();
    lcd.setCursor(0,0);
    if (buttons & BUTTON_UP) {
      lcd.setBacklight(RED);
      Boat1--;
    }
    if (buttons & BUTTON_DOWN) {
      lcd.setBacklight(RED);
      Boat2--;
    }
    if (buttons & BUTTON_LEFT) {
      Boat1++;
      lcd.setBacklight(GREEN);
      delay(500);
    }
    if (buttons & BUTTON_RIGHT) {
      Boat2++;
      lcd.setBacklight(GREEN);
      delay(500);
    }
    if (buttons & BUTTON_SELECT) {
      lcd.setBacklight(VIOLET);
    }
  }
}
