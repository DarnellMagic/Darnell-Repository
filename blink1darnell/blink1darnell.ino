const int led = 4;
int buttonState;
int ledState;

void setup() {
pinMode(led, OUTPUT);
Serial.begin(9600);
}

void loop() {
 
digitalWrite(led, HIGH);
delay(1000);
digitalWrite(led, LOW);
delay(1000);

digitalWrite(led, HIGH);
Serial.println("LED is on");
delay(1000);

digitalWrite(led, LOW);
Serial.println("LED is off");
delay(1000);
}
