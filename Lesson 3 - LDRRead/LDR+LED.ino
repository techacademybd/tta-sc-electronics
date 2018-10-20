int ledPin = 11;

int ldrPin = A0;
int threshold = 700;

void setup(){

  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
  Serial.begin(9600);
}

void loop(){

  int var = analogRead(ldrPin);
  
  Serial.println(var);
  
  if(var > threshold)
  {
    digitalWrite(ledPin, HIGH);
  }
  
  else
  {
    digitalWrite(ledPin, LOW);
  }
  
}
