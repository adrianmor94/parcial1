#include<Ultrasonic.h>

Ultrasonic ultrasonido(7,6);
int led=5;
int distancia; int pulso;
int pause;
void setup () {
  pinMode (led,OUTPUT);
  
}

void loop () {
  
 distancia =ultrasonido.Ranging(CM);
 if((distancia<5) and (distancia>10))
 {
  pause = ultrasonido.Ranging(CM) * 10;
 }
  digitalWrite(led,HIGH);
 } 
