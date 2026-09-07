#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 6;

// CHANGE THESE TO MATCH YOUR TANK
const int tankHeight = 18; // Total height from sensor to bottom in cm

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Water Level:");
}

void loop() {
  long duration;
  int distance;
  int waterLevel;

  // Clear the trigger
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send a 10 microsecond pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echo
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in cm
  // Distance = (Time x Speed of Sound) / 2
  distance = duration * 0.034 / 2;

  // Calculate water level
  // If the sensor is at the top, Water Level = Total Height - Empty Space
  waterLevel = tankHeight - distance;

  // Safety check (if level is negative or above tank height)
  if (waterLevel < 0) waterLevel = 0;
  if (waterLevel > tankHeight) waterLevel = tankHeight;

  // Display on LCD
  lcd.setCursor(0, 1);
  lcd.print("Level: ");
  lcd.print(waterLevel);
  lcd.print(" cm    "); // Extra spaces to clear old digits

  // BUZZER ALERT (when water level is low)
  if (waterLevel >= 10) {
  digitalWrite(buzzer, LOW );  // ON
 } else {
    digitalWrite(buzzer, HIGH);   // OFF
 }

  delay(500); // Update every half second
}
