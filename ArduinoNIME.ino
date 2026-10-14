
const int ledPin = 8;
const int buttonPin = 7;

const int fsrPin = A0;
const int ldrPin = A1;
const int potPin = A2;

void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(fsrPin, INPUT);
  pinMode(ldrPin, INPUT);
  pinMode(potPin, INPUT);
}

void loop() {

  // Read all inputs
  int buttonValue = digitalRead(buttonPin);
  int fsrValue = analogRead(fsrPin);
  int ldrValue = analogRead(ldrPin);
  int potValue = analogRead(potPin);

  // Control the LED
  if (buttonValue == HIGH) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }

  // Send sensor data
  Serial.print(buttonValue);
  Serial.print(" ");
  Serial.print(fsrValue);
  Serial.print(" ");
  Serial.print(ldrValue);
  Serial.print(" ");
  Serial.println(potValue);

  delay(50);
}

