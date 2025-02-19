
int ledPin = 8;
int ledState = LOW;
int buttonPin = 5;
int buttonState = 0;
int lastButtonState = LOW;

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop(){
  buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH && lastButtonState == LOW){
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
    delay(200);
  }
   lastButtonState = buttonState;
}   
