const int buttonPin = 2;  //D4
const int ledPin =  0;  //D3



void setup() {

  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {



  if (digitalRead(buttonPin) == HIGH) {

    digitalWrite(ledPin, LOW);
  } else {

    digitalWrite(ledPin, HIGH);
  }
}
