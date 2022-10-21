// Reference: https://create.arduino.cc/projecthub/mantastka/8x-led-lighting-by-sound-16b21c
int ledPin1= 13; //Adding the LED's and sensor.
int ledPin2= 12;
int ledPin3= 11;
int ledPin4= 10;
int ledPin5= 9;
int ledPin6= 8;
int ledPin7= 7;
int ledPin8= 6;
int sensorPin= A0; //The sensor selecting as Analog pin. The Analog Pin is better for projects as this one.
int val = 0;

void setup(){
  pinMode(ledPin1, OUTPUT); //Selecting LEDs as outputs to push the results in LEDs of sound detector
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin8, OUTPUT);
  pinMode(sensorPin, INPUT); //Selecting the sensor as input to send results into Arduino
  Serial.begin (9600);
}
  
void loop (){
  val =analogRead(sensorPin);
  Serial.println (val);
  // when the sensor detects a signal, LED flashes
  
  //Blue light 1
  if (val >= 600) {
    digitalWrite(ledPin1, HIGH); //selecting the values of LEDs to flash by detecting values of sound sensor.
  }
  else {
    digitalWrite(ledPin1, LOW);
  }

  //Blue light 2
   if (val >= 600) {
    digitalWrite(ledPin2, HIGH);
  }
  else {
    digitalWrite(ledPin2, LOW);
  }

   //Blue light 3
   if (val >= 650) {
    digitalWrite(ledPin3, HIGH);
  }
  else {
    digitalWrite(ledPin3, LOW);
  }

  //Green light 1
  if (val >= 650) {
    digitalWrite(ledPin4, HIGH);
  }
  else {
    digitalWrite(ledPin4, LOW);
  }

  //Green lgith 2
  if (val >= 650) {
    digitalWrite(ledPin5, HIGH);
  }
  else {
    digitalWrite(ledPin5, LOW);
  }

  //Red light 1
  if (val >= 750) {
    digitalWrite(ledPin6, HIGH);
  }
  else {
    digitalWrite(ledPin6, LOW);
  }

  //Red light 2
  if (val >= 750) {
    digitalWrite(ledPin7, HIGH);
  }
  else {
    digitalWrite(ledPin7, LOW);
  }

  //Red light 3
  if (val >= 750) {
    digitalWrite(ledPin8, HIGH);
  }
  else {
    digitalWrite(ledPin8, LOW);
  }
}
