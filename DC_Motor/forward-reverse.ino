
#include<arduino.h>

void setup()
{
    pinMode(3, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    digitalWrite(3,HIGH);
}

void loop()
{
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    delay(5000);
    

    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    delay(5000);
}