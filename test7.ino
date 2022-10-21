int motorPin = 3;
int sensorPin = A0;
int sensorAmbient = 0;
int thresholdMargin = 400;

void setup()
{
  pinMode(motorPin, OUTPUT);
  sensorAmbient = analogRead(sensorPin);
  Serial.begin(9600);
}
void loop()
{
  int sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if( sensorValue < sensorAmbient + thresholdMargin)
  {
    digitalWrite(motorPin, HIGH);  
  }
  else
  {
    digitalWrite(motorPin, LOW);  
  }  
}
