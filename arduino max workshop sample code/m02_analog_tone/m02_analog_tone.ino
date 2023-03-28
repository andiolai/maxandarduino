/*
  Analog read based on the analog potentiometer setup
*/

const int potpin = A0;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin
const int speaker = 9 ;

// variables will change:
int potval = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  pinMode(speaker, OUTPUT);
  // initialize the potentiometer pin as an input:
  pinMode(potpin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  potval = analogRead(potpin);
  int dataval = map(potval, 0, 1023, 0, 500);//mapping the readings to certain value
  //can be used to create multiple ranges
  tone (speaker, dataval, 500); // the relative pin, frequency and duration of tone
  Serial.println(potval);

if (dataval==500){
      digitalWrite(ledPin, HIGH);// turn LED on
}
else {
      digitalWrite(ledPin, LOW);    // turn LED off
      

  
}

delay(100);
}
