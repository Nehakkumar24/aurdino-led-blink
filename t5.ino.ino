int ledPin = 9;
int brightness = 0;
int fadeAmount = 5;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Fade from minimum to maximum
  for (brightness = 0; brightness <= 255; brightness += fadeAmount) {
    analogWrite(ledPin, brightness);
    delay(20);
  }

  // Fade from maximum to minimum
  for (brightness = 255; brightness >= 0; brightness -= fadeAmount) {
    analogWrite(ledPin, brightness);
    delay(20);
  }
}

