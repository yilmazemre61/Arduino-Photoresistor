// C++ code
// Emre YILMAZ
// 22.06.2021

int lightPin = A1; // This light sensor is plugged into A1 of the Arduino
int data = 0; // This will store the data from the sensor

int redPin = 12; // The redPin is set for 12 of the Arduino
int bluePin = 13; // The bluePin is set for 13 of the Arduino

void setup(){ // The setup function runs only once
    Serial.begin(9600);
    pinMode(redPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
}

  void loop(){ // The loop function runs forever
    data = analogRead(lightPin); // Reads the value from the light sensor and stores it in the data variable
    data = map(data, 6, 679, 0, 100); // Map the data value to a percentage
    Serial.print("Light Value = ");
    Serial.println(data);
  
  // Condition
  if(data >= 50) { // The condition for light
    digitalWrite(redPin, LOW); // The red led is Off
    digitalWrite(bluePin, LOW); // The blue led is Off
  } else{ // The condition for darkness
    digitalWrite(redPin, HIGH); // The red led is On
    digitalWrite(bluePin, HIGH); // The blue led is On
  }
}