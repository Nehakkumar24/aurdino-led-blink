const int irPin = 2;
const int ledPin = 9;

int count = 0;
bool lastState = HIGH;

void setup() {
  pinMode(irPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  bool currentState = digitalRead(irPin);

  
  if (lastState == HIGH && currentState == LOW) {
    count++;
    delay(200);  
  }

  lastState = currentState;

  
  if (count > 0 && currentState == HIGH) {
    delay(1000); 
    for (int i = 0; i < count; i++) {
      digitalWrite(ledPin, HIGH);
      delay(300);
      digitalWrite(ledPin, LOW);
      delay(300);
    }

    count = 0; 
  }
}

