/*
 * 5.1.19
 * Creators:
 * Aidan Drzewicki and Dylan Despins 
 * We are going to make LCD screen
 * Public Domain 
 */



// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello world!");
}

void loop(){
  lcd.home();
  lcd.print("tentacle");
}
 
 
