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


// the setup function runs once when you press reset or power the board

int val = 0;
void setup() {
  // initialize digital pin 13 as an output.
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //randomSeed(analogRead(0));
    
  //digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  //delay(random(1000));              // wait for a second
  //digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  //delay(random(1000));  // wait for a second
  
  val = analogRead(0);
  Serial.println(val * (255/710));
  
  analogWrite(6, val * (255 / 710));
}



