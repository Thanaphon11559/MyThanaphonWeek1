#include <Arduino.h>
#define LED_PIN1 0
#define LED_PIN2 4
#define LED_PIN3 16
#define LED_PIN4 17
#define LED_PIN5 5
#define LED_PIN6 18
#define LED_PIN7 19
#define LED_PIN8 23
#define SENSOR_pin 36


void setup(){
   pinMode(LED_PIN1, OUTPUT);
   pinMode(LED_PIN2, OUTPUT);
   pinMode(LED_PIN3, OUTPUT);
   pinMode(LED_PIN4, OUTPUT);
   pinMode(LED_PIN5, OUTPUT);
   pinMode(LED_PIN6, OUTPUT);
   pinMode(LED_PIN7, OUTPUT);
   pinMode(LED_PIN8, OUTPUT);
}
void loop() {
 int sensorValue = analogRead(SENSOR_pin);

 if(sensorValue >=0 && sensorValue <=500) {
    digitalWrite(LED_PIN1,1);
    digitalWrite(LED_PIN2,0);
    digitalWrite(LED_PIN3,0);
    digitalWrite(LED_PIN4,0);
    digitalWrite(LED_PIN5,0);
    digitalWrite(LED_PIN6,0);
    digitalWrite(LED_PIN7,0);
    digitalWrite(LED_PIN8,0);    
 } else if (sensorValue >= 501 && sensorValue <=1000) {
    digitalWrite(LED_PIN1,1);
    digitalWrite(LED_PIN2,1);
    digitalWrite(LED_PIN3,1);
    digitalWrite(LED_PIN4,0);
    digitalWrite(LED_PIN5,0);
    digitalWrite(LED_PIN6,0);
    digitalWrite(LED_PIN7,0);
    digitalWrite(LED_PIN8,0);
 }  else if (sensorValue >= 1001  && sensorValue<=2000) {
    digitalWrite(LED_PIN1,1);
    digitalWrite(LED_PIN2,1);
    digitalWrite(LED_PIN3,1);
    digitalWrite(LED_PIN4,1);
    digitalWrite(LED_PIN5,1);
    digitalWrite(LED_PIN6,0);
    digitalWrite(LED_PIN7,0);
    digitalWrite(LED_PIN8,0);
 } else  {
    digitalWrite(LED_PIN1,1);
    digitalWrite(LED_PIN2,1);
    digitalWrite(LED_PIN3,1);
    digitalWrite(LED_PIN4,1);
    digitalWrite(LED_PIN5,1);
    digitalWrite(LED_PIN6,1);
    digitalWrite(LED_PIN7,1);
    digitalWrite(LED_PIN8,1);
 
}
}
 