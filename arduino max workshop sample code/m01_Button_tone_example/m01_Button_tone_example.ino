/*
 * based on Button example inside arduino example codes
 * 
 * tone reference:
   //https://www.arduino.cc/reference/en/language/functions/advanced-io/tone/
*/

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin
const int speaker= 9 ;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  pinMode(speaker,OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    
    digitalWrite(ledPin, HIGH);// turn LED on:
    tone (speaker,440,500);  // the relative pin, frequency and duration of tone
   
  } else {
    digitalWrite(ledPin, LOW);    // turn LED off:
    noTone(speaker); // turn off the tone
  }
}
