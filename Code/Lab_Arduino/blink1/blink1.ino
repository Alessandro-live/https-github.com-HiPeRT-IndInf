// Creating an alias for a GPIO pin.
// You will (of course need to create the circuitry
//int LED_BLUE = 7;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // Turn ON
  delay(1000); // Wait for 1 sec  

  digitalWrite(LED_BUILTIN, LOW); // Turn OFF
  delay(1000); // Wait for 1 sec
}
