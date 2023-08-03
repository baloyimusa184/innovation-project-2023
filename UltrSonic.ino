

void ultrSonic() {
  // generate 10-microsecond pulse to TRIG pin
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  duration_us = pulseIn(echoPin, HIGH); // measure duration of pulse from ECHO pin
 
  distance_cm = 0.017 * duration_us;// calculate the distance
  lcd.setCursor(0,0);
  lcd.print(distance_cm);
  lcd.println(" cm ");
  delay(500);
}
