//example 4 analog to max
//1 knob to MAXMSP serial


int pot1 =A0;// define pin port for relative parts

int potval=0;// set up basic variables for reading potentiometer

void setup() {

Serial.begin(9600); // initialize serial communication at 9600 bits per second
pinMode(pot1,INPUT);//setup pin mode for potentiometer
}

void loop() {

potval= analogRead(pot1);// read the potentiometer

Serial.println (potval);// send relative potentiometer readings

delay(10); // delay for stability
}
