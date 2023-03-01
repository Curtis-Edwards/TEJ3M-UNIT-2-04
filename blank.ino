/*

  Created by: Curtis Edwards

  Created on: Feb 2023



  Turns an LED on for one second, then off for one second, repeatedly.

*/



void setup()

{

  pinMode(11, OUTPUT);

  pinMode(12, OUTPUT);

  pinMode(13, OUTPUT);

}



void loop()

{

  digitalWrite(11, HIGH);

  digitalWrite(12, LOW);

  digitalWrite(13, LOW);

  delay(500); // Wait for 500 millisecond(s)
  
  digitalWrite(11, HIGH);

  digitalWrite(12, HIGH);

  digitalWrite(13, LOW);

  delay(500); // Wait for 500 millisecond(s)

  digitalWrite(11, LOW);

  digitalWrite(12, HIGH);

  digitalWrite(13, LOW);

  delay(500); // Wait for 500 millisecond(s)
  
  digitalWrite(11, LOW);

  digitalWrite(12, HIGH);

  digitalWrite(13, HIGH);

  delay(500); // Wait for 500 millisecond(s)
  
  digitalWrite(11, LOW);

  digitalWrite(12, LOW);

  digitalWrite(13, HIGH);

  delay(500); // Wait for 500 millisecond(s)
  
  digitalWrite(11, HIGH);

  digitalWrite(12, LOW);

  digitalWrite(13, HIGH);

  delay(500); // Wait for 500 millisecond(s) 
}