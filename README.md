# Basic-MQ2-ESP32

Code Description for MQ2 Gas Sensor with ESP32
This code is designed to interface the MQ2 Gas Sensor with an ESP32 microcontroller, reading the sensor's analog output and displaying the results via the serial monitor. The MQ2 sensor is used to detect gases like LPG, methane, and smoke, making it useful in air quality monitoring and safety systems.

Key Features:
Pin Configuration: The analog output pin of the MQ2 sensor is connected to GPIO 33 on the ESP32.
Sensor Warm-up: The MQ2 sensor requires some time to warm up after being powered on. This is essential for stable readings, so a 20-second delay is added in the setup() function.
Analog Reading: In the loop() function, the ESP32 reads the sensor value using the analogRead() function, which returns a value between 0 and 4095. This value represents the gas concentration detected by the sensor.
Serial Output: The sensor value is printed to the serial monitor every second, allowing you to observe real-time changes in gas concentration
