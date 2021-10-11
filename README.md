# Arduino-Photoresistor
Level-2-- Write a program that will turn on both the red LED (D12) and blue LED (D13) at the same time when the sensor detects darkness.
Level-3-- Light meter Challenge– Write a program that will turn on the red channel on the RGB led (D9) when it is dark, the blue channel(D11) when there is some light, and the Green RGB channel(D10) when the light sensor detects a bright light.
Level-4-- Add two additional LED's. In order from left to right the value of each light is 8-4-2-1 to create binary numbers. Using the light sensor mapped from 0 to 15 have the lights count in binary as you move the light sensor slider from left to right. Ex 5: off - ON - off - ON 4+1 = 5. Can use:data = map(data,6,679,0,15); //map the data value to 0-15
