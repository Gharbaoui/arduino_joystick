#define joyY A1
#define joyX A0
#define RED_LED A2
#define GREEN_LED A3

void setup() {
  // put your setup code here, to run once:
	Serial.begin(9600);
}

int xValue, yValue;

void loop() {
  // put your main code here, to run repeatedly:
	xValue = analogRead(joyX);
	yValue = analogRead(joyY);


  analogWrite(RED_LED ,xValue);
  analogWrite(GREEN_LED, yValue);
}
