#include "DigiKeyboard.h"
#define KEY_TAB           0xB3
#define KEY_RIGHT_CTRL    0x84
#define KEY_RIGHT_ARROW   0xD7
void setup() {
  delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_B, MOD_GUI_LEFT );
  delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_RIGHT_ARROW);
  delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_RIGHT_ARROW);
  delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_L,MOD_CONTROL_RIGHT );
  delay(2000);
  DigiKeyboard.print ("https://avccrew.wordpress.com/");
  delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  // put your main code here, to run repeatedly:

}
