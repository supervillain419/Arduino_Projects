//This DigiSpark script opens up Rick Astley's - Never Gonna Give You Up and also a fake Windows update screen and then maximizes it using F11
#include "DigiKeyboard.h"
//DigiKeyboard.print("cmd /k mode con: cols=20 lines=20 |start https://youtu.be/dQw4w9WgXcQ?t=43");
#define KEY_DOWN 0x51
void setup() {
  //empty
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https://youtu.be/dQw4w9WgXcQ?t=43s");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("http://fakeupdate.net/win10ue");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F11);
}
void loop() {
 
  for(;;){ /*empty*/ }
}