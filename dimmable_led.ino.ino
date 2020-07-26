//code for part five of my arduino tutorial: https://lacklusterstudios.blogspot.com/2020/07/arduino-dimmable-led.html
//using a PWM signal, control how bright or dim an LED is.
//licensed under GPL 3.0
//Author: chris nichols (github/rteturn5)

#define LEDPIN 6   //pin connected to LED. will output a PWM signal to control brightness of LED

void setup() {
  //nothing to do here in this project.

}

void loop() {
  analogWrite(LEDPIN,0);   //write a 0% duty cycle PWM signal on LEDPIN,
  delay(300);
  analogWrite(LEDPIN,50);   //write a roughly 20% duty cycle PWM signal on LEDPIN,
  delay(300);
  analogWrite(LEDPIN,100);  //write a roughly 40% duty cycle PWM signal on LEDPIN,
  delay(300);
  analogWrite(LEDPIN,150);  //write a roughly 60% duty cycle PWM signal on LEDPIN,
  delay(300);
  analogWrite(LEDPIN,200);  //write a roughly 80% duty cycle PWM signal on LEDPIN,
  delay(300);
  analogWrite(LEDPIN,250);  //write a roughly 100% duty cycle PWM signal on LEDPIN,
  delay(300);

}
