const int pinLight = A0;
const int pinLed  = 7;
int thresholdvalue = 400;
int nivelLed = 0;

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
        valor+=10;
        analogWrite(pinLed, valor);
        delay(200);
    }
    else
    {
      if (valor != 0){
        valor-=10;
        analogWrite(pinLed, valor);
        delay(200);
      }
        
    }
    
}
