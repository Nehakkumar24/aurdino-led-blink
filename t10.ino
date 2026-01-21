#define LED_PIN 13
#define IR_PIN 3
#define RESET_PIN 2

bool alarmFlag = false;

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(IR_PIN, INPUT);
  pinMode(RESET_PIN, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(IR_PIN) == LOW)   
  {
    alarmFlag = true;
  }

  
  if (digitalRead(RESET_PIN) == LOW)
  {
    alarmFlag = false;
    digitalWrite(LED_PIN, LOW);
  }

  
  if (alarmFlag)
  {
    digitalWrite(LED_PIN, HIGH);
    delay(300);
    digitalWrite(LED_PIN, LOW);
    delay(300);
  }
}
