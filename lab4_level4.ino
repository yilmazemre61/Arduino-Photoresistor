// C++ code
// Emre YILMAZ
// 22.06.2021

int lightPin = A1; // This light sensor is plugged into A1 of the Arduino
int data = 0; // This will store the data from the sensor
int redPin = 13; // The red led is set for 13 of the Arduino
int bluePin = 12; // The blue led is set for 12 of the Arduino
int yellowPin = 11; // The yellow led is set for 11 of the Arduino
int greenPin = 10; // The green led is set for 1- of the Arduino

void setup(){ // The setup function runs only once
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop(){ // The loop function runs forever
  data = analogRead(lightPin); // Reads the value from the light sensor and stores it in the data variable
  data = map(data, 6, 679, 0, 15); // Map the data value to a percentage
  Serial.print("Light value = ");
  Serial.println(data);
  
  // Condition
  // I assumed that red represents value for 8
  // I assumed that blue represents value for 4
  // I assumed that yellow represents value for 2
  // I assumed that green represents value for 1
  if(data == 1){ // The condition for 1
    digitalWrite(greenPin, HIGH); // green led is On
  } else if(data == 2){ // The condirion for 2
     digitalWrite(yellowPin, HIGH); // yellow led is On
  } else if(data == 3){ // The condition for 3
    digitalWrite(greenPin, HIGH); // green led is On
    digitalWrite(yellowPin, HIGH); // yellow pin is On
  } else if(data == 4){ // The condition for 4
    digitalWrite(bluePin, HIGH); // blue led is On
  } else if(data == 5){ // The condition for 5
    digitalWrite(bluePin, HIGH); // blue led is On
    digitalWrite(greenPin, HIGH); // green led is On
  } else if(data == 6){ // The condition for 6
    digitalWrite(bluePin, HIGH); // blue led is On
    digitalWrite(yellowPin, HIGH); // yellow led is On
  } else if(data == 7){ // The condition fo 7
    digitalWrite(bluePin, HIGH); // blue led is On
    digitalWrite(yellowPin, HIGH); // yellow led is On
    digitalWrite(greenPin, HIGH); // green led is On
  } else if(data == 8){ // The condition fo 8
    digitalWrite(redPin, HIGH); // red led is On
  } else if(data == 9){ // The condition for 9
    digitalWrite(redPin, HIGH); // red led is On
    digitalWrite(greenPin, HIGH); // green led is On
  } else if(data == 10){ // The condition for 10
    digitalWrite(redPin, HIGH); // red led is On
    digitalWrite(yellowPin, HIGH); // yellow led is On
  } else if(data == 11){ // The condition for 11
    digitalWrite(redPin, HIGH); // red led is On
    digitalWrite(yellowPin, HIGH); // yellow led is On
    digitalWrite(greenPin, HIGH); // green led is On
  } else if(data == 12){ // The condition for 12
    digitalWrite(redPin, HIGH); // red led is On
    digitalWrite(bluePin, HIGH); // blue led is On
  } else if(data == 13){ // The condition for 13
    digitalWrite(redPin, HIGH); // red led is On
    digitalWrite(bluePin, HIGH); // blue led is On
    digitalWrite(greenPin, HIGH); // green led is On
  } else if(data == 14){ // The condition for 14
    digitalWrite(redPin, HIGH); // red led is On
    digitalWrite(bluePin, HIGH); // blue led is On
    digitalWrite(yellowPin, HIGH); // yellow led is On
  } else if(data == 15){ // The condition for 15
    digitalWrite(redPin, HIGH); // red led is On
    digitalWrite(bluePin, HIGH); // blue led is On
    digitalWrite(yellowPin, HIGH); // yellow led is On
    digitalWrite(greenPin, HIGH); // green led is On
  } else{						// The condition for 0
    digitalWrite(redPin, LOW); // red is Off
    digitalWrite(bluePin, LOW); // blue is Off
    digitalWrite(yellowPin, LOW); // yellow is Off
    digitalWrite(greenPin, LOW); // green is Off
  }
    
}