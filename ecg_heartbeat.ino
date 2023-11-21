void setup() {
  // initialize the serial communication:
  Serial.begin(9600);
  pinMode(10, INPUT); // Setup for leads off detection LO +
  pinMode(11, INPUT); // Setup for leads off detection LO -
}
 
void loop() {
  // get the current timestamp
  unsigned long timestamp = millis();

if((digitalRead(10) == 1)||(digitalRead(11) == 1)){
    Serial.print(timestamp); // Prints the timestamp
    Serial.print(","); // Prints a comma
    Serial.println('!'); // Prints the '!' character and a newline
  }
  else{
    // Serial.print(timestamp); // Prints the timestamp
    // Serial.print(","); // Prints a comma
    Serial.println(analogRead(A0)); // Prints the analog reading and a newline
  }
  //Wait for a bit to keep serial data from saturating
  delay(1);
}