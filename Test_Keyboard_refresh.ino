#include <Keyboard.h>
//#include <Adafruit_CircuitPlayground.h>// Only with adafruit CircuitPlayground
//#define purple  0xcc33ff // Only with adafruit CircuitPlayground
#include <Mouse.h>//Optional

void setup(){
 // while (!Serial);
 //  Serial.begin(9600);
 //  Serial.println("Keyboard-F5 button refresh gadget");
//  CircuitPlayground.begin();//Only with adafruit CircuitPlayground
  Keyboard.begin();
  Mouse.begin();//Optional
 // pinMode(LED_BUILTIN, OUTPUT);
} 
void loop() {
 //  if (CircuitPlayground.slideSwitch()) {//Only with adafruit CircuitPlayground
 //   Serial.println("Slide to the left");// visual check over tty
 //   for (int pixel=0; pixel<10; pixel++) {
 //   CircuitPlayground.setPixelColor(pixel, purple);//visual confirmation
 //   delay (2);
//  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(1000);                       // wait for a second
//  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
//  delay(1000);                       // wait for a second
    Keyboard.press(KEY_F5);//press F5
    delay (2);
    Keyboard.release(KEY_F5);//depress F5
    delay (2);
    Mouse.press(MOUSE_LEFT);//Mouse click ( optional)
    delay(5);
    Mouse.release(MOUSE_LEFT);//Mouse release ( Optional)
    delay (52);
//    CircuitPlayground.clearPixels();// clear the pixels
delay (600000); // Delay 10 mins
//   } }
 //  else {
//    Serial.println("Slide to the right");// visual check over tty
 //   }
}
