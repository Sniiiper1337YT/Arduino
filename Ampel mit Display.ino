void setup() {
  // LED's für die Ampel
 pinMode(12, OUTPUT); // Rot
 pinMode(11, OUTPUT); // Orange
 pinMode(10, OUTPUT);  // Grün
 // 7-Sigment Display
 pinMode(9, OUTPUT); // G
 pinMode(8, OUTPUT); // F
 pinMode(7, OUTPUT); // E
 pinMode(6, OUTPUT); // D
 pinMode(5, OUTPUT); // C
 pinMode(4, OUTPUT); // B
 pinMode(3, OUTPUT); // A
}

void loop() {
  digitalWrite(10, HIGH);
  delay(5000);
  // Reset Timer
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  // 1
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(1000);
  // 2
  digitalWrite(5, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  delay(1000);
  // 3
  digitalWrite(7, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(1000);
  // 4
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, HIGH);
  delay(1000);
  // 5
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  delay(1000);
  // 6
  digitalWrite(7, HIGH);
  delay(1000);
  // 7
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(100);
  // 8
  delay(1000);
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  delay(1000);
  // 9
  digitalWrite(7, LOW);
  delay(1000);
  // 0
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  delay(2000);
  // Ampel Schaltung
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(2000);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(10000);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(2000);
  digitalWrite(11, LOW);
}
