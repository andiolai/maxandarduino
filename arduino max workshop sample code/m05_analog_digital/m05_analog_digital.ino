//example 5 analog and digital combine
//1 button and 1 knob to MAXMSP serial
//button as gate to read knob

int buttonPin = 2; // define pin port for relative parts
int pot1 =A0;

int buttonState = 0;// set up basic variables for reading button,pot
int potval=0;

void setup() {

Serial.begin(9600); // initialize serial communication at 9600 bits per second
pinMode(buttonPin, INPUT_PULLUP); // set the button pin as input with pull-up method
pinMode(pot1,INPUT);
}

void loop() {

buttonState = digitalRead(buttonPin); // read the button state
potval= analogRead(pot1);// read the potentiometer

if (buttonState == LOW) { // check if the button is pressed
Serial.print(potval);// send relative potentiometer readings
Serial.print(" ");// ***send a space for MAX communication translation of serial
Serial.println("1"); // send serial data '1' to Max/MSP
}

else{  // send serial data to Max/MSP if no button pressed
Serial.print("0");
Serial.print(" ");
Serial.println("0"); 
}

delay(10); // delay for stability

}
