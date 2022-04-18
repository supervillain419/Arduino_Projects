#include "DigiKeyboard.h"
void setup(){
  //empty
  //DigiKeyboard.sendKeyStroke(KEY_SPACE , MOD_GUI_LEFT);
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
    DigiKeyboard.print ("This is an example of what an malduino can do! Demostration by Nektarios Nks!");
    delay(5000);
}
void loop(){
  /*DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_SPACE,MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https://www.youtube.com/watch?v=TcarQ9yz8TM&ab_channel=%CE%9B%CF%8C%CE%B3%CE%BF%CF%82%CE%A4%CE%B9%CE%BC%CE%AE%CF%82%28LogosTimis%29OFFICIAL");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){*/
    /*empty*/
    DigiKeyboard.print ("\n\nYou forgot to unplug the usb mate!");
    delay(5000);
    
  }
