const int pinLight = A0;
const int pinLed   = 7;
int thresholdvalue = 400;

void setup() {

    // Configure the LED's pin for output signals.
    pinMode(pinLed, OUTPUT);
}

void loop() {
  
    // Read the value of the light sensor. The light sensor is an analog sensor.
    int sensorValue = analogRead(pinLight);

    // Turn the LED on if the sensor value is below the threshold.
    if(sensorValue < thresholdvalue)
    {
        digitalWrite(pinLed, HIGH);
    }
    else
    {
        digitalWrite(pinLed, LOW);
    }
    
}
