#include "DigiKeyboard.h"
#define KEY_DOWN 0x51
#define KEY_ENTER 0x28
void setup(){
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
}
void loop(){ 
	//empty
  }
