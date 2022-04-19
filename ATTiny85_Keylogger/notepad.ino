#include "DigiKeyboard.h"
void setup(){
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT );
    delay(500);
    DigiKeyboard.print ("cmd");
    delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    delay(1000);
    DigiKeyboard.print ("notepad.exe");
    delay(1000);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    delay(1000);
    /*delay(1000);*/
    DigiKeyboard.print ("This is an example of what an malduino can do!");
    delay(5000);
}
void loop(){
  /*Empty*/
  }
