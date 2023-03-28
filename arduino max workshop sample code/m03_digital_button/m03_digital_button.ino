//example 3 digital button to max
//1 button to MAXMSP serial
//button sending serial

int buttonPin = 2; // define pin port for relative parts

int buttonState = 0;// set up basic variables for reading button,pot

void setup() {

Serial.begin(9600); // initialize serial communication at 9600 bits per second
pinMode(buttonPin, INPUT_PULLUP); // set the button pin as input with pull-up method
}

void loop() {

buttonState = digitalRead(buttonPin); // read the button state

if (buttonState == LOW) { // check if the button is pressed
Serial.println("1"); // send serial data '1' to Max/MSP
}

else{  // send serial data to Max/MSP if no button pressed
Serial.print("0");
}

delay(10); // delay for stability
}
