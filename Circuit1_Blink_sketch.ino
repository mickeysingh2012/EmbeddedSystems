/*
    Circuit 1: Blink an LED
    Turns an LED connected to pin 13 on and off. Repeats forever.
*/

void setup() {

  pinMode(13, OUTPUT);      // Set pin 13 to output

}


void loop() {

  digitalWrite(13, HIGH);   // Turn on the LED

  delay(1000);              // Wait for two seconds

  digitalWrite(13, LOW);    // Turn off the LED

  delay(1000);              // Wait for two seconds

}

