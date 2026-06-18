#define LED_PIN 2

void setup()
{
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  // Fast Blink
  for(int i = 0; i < 5; i++)
  {
    digitalWrite(LED_PIN, HIGH);
    delay(200);

    digitalWrite(LED_PIN, LOW);
    delay(200);
  }

  delay(1000);

  // Slow Blink
  for(int i = 0; i < 3; i++)
  {
    digitalWrite(LED_PIN, HIGH);
    delay(1000);

    digitalWrite(LED_PIN, LOW);
    delay(1000);
  }

  delay(1000);

  // Double Blink
  for(int i = 0; i < 4; i++)
  {
    digitalWrite(LED_PIN, HIGH);
    delay(200);

    digitalWrite(LED_PIN, LOW);
    delay(200);

    digitalWrite(LED_PIN, HIGH);
    delay(200);

    digitalWrite(LED_PIN, LOW);
    delay(1000);
  }

  delay(2000);
}