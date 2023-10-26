#include <LiquidCrystal.h>

// Define the LCD pins
const int RS = 12;
const int EN = 11;
const int D4 = 5;
const int D5 = 4;
const int D6 = 3;
const int D7 = 2;

// Define the LM35 sensor pin
const int LM35_PIN = A0;

// Create an LCD object
LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

void setup() {
  // Initialize the LCD
  lcd.begin(16, 2);

  // Print a welcome message
  lcd.print("Temperature:");
}

void loop() {
  // Read the voltage from the LM35 sensor
  float voltage = analogRead(LM35_PIN) * 5.0 / 1024.0;

  // Calculate the temperature in Celsius
  float temperature = voltage / 0.01;

  // Clear the LCD display
  lcd.clear();

  // Print the temperature on the LCD
  lcd.print(temperature);
  lcd.print("°C");

  // Delay for 1 second
  delay(1000);
}
