/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */
 
//int tones[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440};
//            mid C  C#   D    D#   E    F    F#   G    G#   A 

int greenLed = 11;
int yellowLed = 12;
int redLed = 13;
//int buzzer = 1;

// the setup function runs once when you press reset or power the board
void setup() 
{
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  //pinMode(buzzer, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(greenLed, HIGH);
  //tone(buzzer, 330); //buzzer Tom E 
  delay(2000);
  digitalWrite(greenLed, LOW);
  digitalWrite(yellowLed, HIGH);
  //tone(buzzer, 392); //buzzer Tom G
  delay(700);     
  digitalWrite(yellowLed, LOW);
  digitalWrite(redLed, HIGH);
  //tone(1, 294);  //buzzer Tom D
  delay(2300);   
  digitalWrite(redLed, LOW);
}
