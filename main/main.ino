#define joyY A1
#define joyX A0

void setup() {
  // put your setup code here, to run once:
	Serial.begin(9600);
}

int xValue, yValue;

void loop() {
  // put your main code here, to run repeatedly:
	xValue = analogRead(joyX);
	yValue = analogRead(joyY);


	Serial.print(xValue);
	Serial.print("\t");
	Serial.print(yValue);
	Serial.print("\n");
}
