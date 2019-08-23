#include <Servo.h>

servoRight.attach(12);
servoLeft.attach(13);

Servo servoLeft;
Servo servoRight;

int speakerPin = 12;
int inPin = 4;   // choose the input pin (for a pushbutton)
int inPin2 = 5;   // choose the input pin (for a pushbutton)
int val = 0;     // variable for reading the pin status

boolean isPushed = false; // variable for the status of the button
boolean isPressed = false; // variable for the status of the piezo
boolean oncePressed = false;

int length = 15; // the number of notes
char notes[] = "ccggaagffeeddc "; // a space represents a rest
int beats[] = { 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 4 };
int tempo = 300;

void setup() {
  pinMode(speakerPin, OUTPUT);
  pinMode(inPin, INPUT);    // declare pushbutton as input
  Serial.begin(9600);       // set up the pathway to write on your monitor
}

void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }
}
void playNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };
  // play the tone corresponding to the note name
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}

void loop(){
  val = digitalRead(inPin);  // read input value
   Serial.println(val);      // print the value of "value" on the Serial Monitor
  if (val == HIGH) {         // check if the input is HIGH (button pushed)
    oncePressed = true;
    isPushed = true;
  } else {
    if(isPushed){
       if(isPressed){
            digitalWrite(speakerPin, LOW);  // turn music OFF
            stopMuziek();
            isPressed = false;
        } else{
         if(oncePressed){
             digitalWrite(speakerPin, HIGH);  // turn music ON
             speelMuziek();
             isPressed = true;
          }
        }
        isPushed = false;
    } else {
    }
  }
}

void stopMuziek(){
    noTone(5);
}
void speelMuziek(){
    for (int i = 0; i < length; i++) {
    if (notes[i] == ' ') {
      delay(beats[i] * tempo); // rest
    } else {
      playNote(notes[i], beats[i] * tempo);
    }
    // pause between notes
    delay(tempo / 2); 
  }
   stopMuziek();
}
