/* whiskeralong, this code sends a message to the robot if the whisker is pressed
 *  
 */

int leftWhisker = 5;
int rightWhisker = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(leftWhisker, INPUT);
  pinMode(rightWhisker, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int leftWhiskerValue = digitalRead(leftWhisker);
  int rightWhiskerValue = digitalRead(rightWhisker);

  Serial.print("Left:");
  Serial.println(LeftWhiskerValue);
  Serial.print("Right:");
  Serial.println(RightWhiskerValue);
  Serial.println("");
}
  if(leftWhiskerValue== 0 && rightWhiskerValue==0) {
    Serial.println("LEFT AND RIGHT IS BEING PRESSED);}

    else if(leftWhiskerValue == 0){
      Serial.print("Left is being preesed get your hands off")}
    else if(rightWhiskerValue == 0{ 
      Serial.println("Right pressed");)
     else{
      Serial.println("YOU'RE GOOD YOU DIDNT TOUCH ANY WHISKER")
     }

   delay(300);
   }
