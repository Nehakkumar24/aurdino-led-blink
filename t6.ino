const int ledPin = 9;
const int buttonPin = 2;

int brightnessLevels[3] = {64, 128, 255};
int levelIndex = 0;

bool lastButtonState = HIGH;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);  
}

void loop() {
  bool buttonState = digitalRead(buttonPin);


  if (lastButtonState == HIGH && buttonState == LOW) {
    levelIndex = (levelIndex + 1) % 3;
    analogWrite(ledPin, brightnessLevels[levelIndex]);
    delay(200); 
  }

  lastButtonState = buttonState;
}
