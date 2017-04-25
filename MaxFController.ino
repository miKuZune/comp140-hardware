const int ledCount = 10;

const int buttonPin1 = 2;
const int buttonPin2 = 3;
int ledPins[] = {
  4,5,6,7,8,9,10,11,12,13
};
int buttonState1 = 0;
int buttonState2 = 0;
void setup() {
  pinMode(buttonPin1,INPUT);
  pinMode(buttonPin2,INPUT);

   for(int thisLed= 0; thisLed<ledCount; thisLed++){
    pinMode(ledPins[thisLed],OUTPUT);
  }
  Serial.begin(9600);

}
 int counter = 4;
void loop() {
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  int sensorValue = analogRead(A0);

  if(sensorValue>500){
    for(int ledNumber = 0; ledNumber<5;ledNumber++){
      digitalWrite(ledPins[ledNumber+5],HIGH);
      digitalWrite(ledPins[ledNumber],LOW);
    }
  }
  else{
    for(int ledNumber = 0; ledNumber<5;ledNumber++){
      digitalWrite(ledPins[ledNumber+5],LOW);
      digitalWrite(ledPins[ledNumber],HIGH);
    }
   }
}
