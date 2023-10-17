int ledPin = 9;
int brightness = 255;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Set the brightness of the LED
  analogWrite(ledPin, brightness);

  // Wait for 1 second
  delay(1000);

  // Decrease the brightness of the LED
  brightness -= 10;

  // If the brightness of the LED is 0, increase it to 255
  if (brightness == 0) {
    brightness = 255;
  }
}