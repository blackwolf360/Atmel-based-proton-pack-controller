/*
  Blink
 
 Turns on an LED on for one second, then off for one second, repeatedly.
 
 The circuit:
 * LED connected from digital pin 13 to ground.
 
 * Note: On most Arduino boards, there is already an LED on the board
 connected to pin 13, so you don't need any extra components for this example.
 
 
 Created 1 June 2005
 By David Cuartielles adapted for atmel 328p by Blackwolf
 
 http://arduino.cc/en/Tutorial/Blink
 
 based on an orginal by H. Barragan for the Wiring i/o board
 
 */

int ledPin =  13;    // LED connected to digital pin 13

// The setup() method runs once, when the sketch starts

void setup()   {      

  Serial.begin(9600);
  // initialize the digital pin as an output:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, INPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(0, OUTPUT);
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  Serial.println("Proton Pack Ready!");
}

// the loop() method runs over and over again,
// as long as the Arduino has power

void loop()                     
{
 if (digitalRead(9) == LOW)
{
 
    
    Serial.println("Pack Switch has been turned ON");
    digitalWrite(8, HIGH);

   
  
  digitalWrite(13, HIGH);
  digitalWrite(1, HIGH);   // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  delay(50);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);  // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  delay(50);
  digitalWrite(3, HIGH);  // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, HIGH);    // set the LED off
  delay(50);
  digitalWrite(4, HIGH);  // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  delay(50);
  digitalWrite(1, HIGH);
  digitalWrite(5, HIGH);  // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  delay(50);
  digitalWrite(6, HIGH);  // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);  // set the LED off
  delay(50);
  digitalWrite(1, HIGH);   // set the LED on
  digitalWrite(7, HIGH);
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  delay(50);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(1, HIGH);   // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  delay(50);

  digitalWrite(2, HIGH);  // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  delay(50);
  digitalWrite(1, HIGH);
  digitalWrite(3, HIGH);  // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  delay(50);
  digitalWrite(1, HIGH);
  digitalWrite(4, HIGH);  // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  delay(50);
  digitalWrite(5, HIGH);  // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  delay(50);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);  // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);  // set the LED off
  delay(50);
  digitalWrite(1, HIGH);   // set the LED on
  digitalWrite(7, HIGH);
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  delay(50);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(1, HIGH);   // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  delay(50);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);  // set the LED on
  delay(50);                  // wait for a second    // set the LED off
  delay(50);
  digitalWrite(1, HIGH);
  digitalWrite(3, HIGH);  // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  delay(50);
  digitalWrite(1, HIGH);
  digitalWrite(4, HIGH);  // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  delay(50);
  digitalWrite(5, HIGH);  // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  delay(50);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);  // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);  // set the LED off
  delay(50);
  digitalWrite(1, HIGH);   // set the LED on
  digitalWrite(7, HIGH);
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  delay(50);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(1, HIGH);   // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  delay(50);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);  // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  delay(50);
  digitalWrite(1, HIGH);
  digitalWrite(3, HIGH);  // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  delay(50);
  digitalWrite(1, HIGH);
  digitalWrite(4, HIGH);  // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  delay(50);
  digitalWrite(1, HIGH);
  digitalWrite(5, HIGH);  // set the LED on
  delay(50);                  // wait for a second    // set the LED off
  delay(50);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);  // set the LED on
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);  // set the LED off
  delay(50);   // set the LED on
  digitalWrite(7, HIGH);
  delay(50);                  // wait for a second
  digitalWrite(1, LOW);    // set the LED off
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  delay(50);
  digitalWrite(10, LOW);
  
  }
  else
  {
  digitalWrite(8, LOW);
  }
}

