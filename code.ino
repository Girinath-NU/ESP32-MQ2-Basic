// Define the pin for MQ2 sensor
const int mq2Pin = 33;

void setup() {
  // Start the serial communication
  Serial.begin(9600);
  // Wait for a while for sensor to heat up
  delay(20000); 
}

void loop() {
  // Read the analog value from MQ2 sensor
  int sensorValue = analogRead(mq2Pin);

  // Print the sensor value to the serial monitor
  Serial.print("MQ2 Sensor Value: ");
  Serial.println(sensorValue);

  // Wait for 1 second before reading again
  delay(1000);
}
