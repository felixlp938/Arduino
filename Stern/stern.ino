//Weinachtsstern (Made 2022 by Felix)
void setup()
{
	pinMode(3, INPUT_PULLUP); //an pin 3: Schalter
	pinMode(11, OUTPUT );	  // --> LEDs (pin 11)
	pinMode(10, OUTPUT);	  // --> LEDS (pin 10)
	pinMode(9, OUTPUT);		  // --> LEDs (pin 09)
	pinMode(6, OUTPUT);		  // --> LEDs (pin 06)
	pinMode(5, OUTPUT);		  // --> LEDs (pin 05)
	randomSeed(A1);			  // für random();
}
void loop()
{
	if (digitalRead(3) == 0)
	{
		for (int i = 0; i < 11; i++)
		{
			digitalWrite(5, HIGH);
			delay(500);
			digitalWrite(5, LOW);
			digitalWrite(6, HIGH);
			delay(500);
			digitalWrite(6, LOW);
			digitalWrite(9, HIGH);
			delay(500);
			digitalWrite(9, LOW);
			digitalWrite(10, HIGH);
			delay(500);
			digitalWrite(10, LOW);
			digitalWrite(11, HIGH);
			delay(500);
			digitalWrite(11, LOW);
			delay(500);
		}
		for (int i = 0; i < 150; i++) //anpassen (150) für die Länge des Flackerns
		{
			light_pin(5);
			light_pin(6);
			light_pin(9);
			light_pin(10);
			light_pin(11);
			delay(20);
		}
	}
}
void light_pin(uint8_t pin)
{
	analogWrite(pin, random(1, 256));
	delay(20);
}