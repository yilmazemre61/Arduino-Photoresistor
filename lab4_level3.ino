// C++ code
// Emre YILMAZ
// 22.06.2021

int lightPin = A1; // This light sensor is plugged into A1 of the Arduino
int data = 0; // This will store the data from the sensor
int RGBRedPin = 9; // The red led is set for 9 of the Arduino
int RGBGreenPin = 10; // The green led is set for 10 of the Arduino
int RGBBluePin = 11; // The blue led is set for 11 of the Arduino

void setup(){ // The setup function runs only once
  Serial.begin(9600);
  pinMode(RGBRedPin, OUTPUT);
  pinMode(RGBGreenPin, OUTPUT);
  pinMode(RGBBluePin, OUTPUT);
}

void loop(){ // The loop function runs forever
  data = analogRead(lightPin); // Reads the value from the light sensor and stores it in the data variable
  data = map(data, 6, 679, 0, 100); // Map the data value to a percentage
  Serial.print("Light Value = ");
  Serial.println(data);
  
  // Condition
  
  // Display red
  if(data > 0 && data <= 33){ // The condition for dark
    digitalWrite(RGBRedPin, HIGH); // The red led is On
  } else if(data > 33 && data <= 66){ // The condition for some light
    digitalWrite(RGBBluePin, HIGH); // The blue led is On
  } else if(data > 66 && data <= 100){ // The condition for bright light
    digitalWrite(RGBGreenPin, HIGH); // The green led is On
  }
}