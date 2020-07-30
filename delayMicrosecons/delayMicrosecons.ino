int outPin = 13;                 // digital pin 8

void setup()
{
  pinMode(outPin, OUTPUT);      // sets the digital pin as output
}

void loop()
{
  digitalWrite(outPin, HIGH);   // sets the pin on
  for(int i=0; i<50; i++)
  {
    delayMicroseconds(10000);        // pausa por 0.01segundo
  }
  digitalWrite(outPin, LOW);    // sets the pin off
  for(int i=0; i<50; i++)
  {
    delayMicroseconds(10000);        // pausa por 0.01segundo
  }
}
