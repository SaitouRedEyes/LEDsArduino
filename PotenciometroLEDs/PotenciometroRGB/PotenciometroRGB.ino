
int valPot = 0;

void setup() {
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
}

void loop() {
  
  valPot = analogRead(A0);
  
  if(valPot >= 0 && valPot <= 341)
  {
    analogWrite(9, map(valPot, 0, 341, 0, 255));  
  }
  else if(valPot >= 342 && valPot <= 682)
  {
    analogWrite(10, map(valPot, 342, 682, 0, 255));  
  }
  else if(valPot >= 683 && valPot <= 1023)
  {
    analogWrite(11, map(valPot, 683, 1023, 0, 255));  
  }
}

