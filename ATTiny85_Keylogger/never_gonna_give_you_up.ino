#include "DigiKeyboard.h"
#define KEY_DOWN 0x51
#define KEY_ENTER 0x28
void setup(){
  //empty
  //DigiKeyboard.sendKeyStroke(KEY_SPACE , MOD_GUI_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT );
  delay(500);
  DigiKeyboard.print ("cmd /k mode con: cols=20 lines=20");
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(200);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT); //Menu
  DigiKeyboard.sendKeyStroke(KEY_DOWN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_DOWN); //goto Move
  for(int i =0; i < 100; i++)
    {
      DigiKeyboard.sendKeyStroke(KEY_DOWN);
    }
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print ("start https://youtu.be/dQw4w9WgXcQ?t=43");
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
    /*delay(1000);*/
    /*DigiKeyboard.print ("This is an example of what an malduino can do! Demostration by Nektarios Nks!");
    delay(5000);*/
}
void loop(){
  /*DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_SPACE,MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https://www.youtube.com/watch?v=TcarQ9yz8TM&ab_channel=%CE%9B%CF%8C%CE%B3%CE%BF%CF%82%CE%A4%CE%B9%CE%BC%CE%AE%CF%82%28LogosTimis%29OFFICIAL");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){*/
    /*empty
    DigiKeyboard.print ("\n\nYou forgot to unplug the usb mate!");
    delay(5000);*/
    
  }
