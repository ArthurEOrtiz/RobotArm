#include <Servo.h>

//maping out input from joysticks

const int readJoyStickOneX = 0;
const int readJoyStickOneY = 1;
const int readJoyStickOneButton = 2;

int joyStickOneXValue = 0;
int joyStickOneYValue = 0;
int joyStickOneButtonState = HIGH;

//Robot posistion by axis
//int axisOnePosistion = 0;
//int axisTwoPosistion = 0;

//Robot Servos and there assigned axis
Servo axisOneServo;
Servo axisTwoServo;

void setup() { 
  // initialize the pushbutton pin as input
  pinMode(readJoyStickOneButton, INPUT);


  //Assign Servo to pins 
  axisOneServo.attach(3);
  axisTwoServo.attach(5);
  Serial.begin(9600);

}

void loop() {

  

  joyStickOneXValue = analogRead(readJoyStickOneX);
  joyStickOneXValue = map(joyStickOneXValue, 0, 1023, 0, 180);
  joyStickOneYValue = analogRead(readJoyStickOneY);
  joyStickOneYValue = map(joyStickOneYValue, 0, 1023, 0, 180);
  
  joyStickOneButtonState = digitalRead(readJoyStickOneButton);

  
  axisOneServo.write(joyStickOneXValue);
  delay(15);
  axisTwoServo.write(joyStickOneYValue);
  delay(15);

  Serial.print(joyStickOneXValue);
  Serial.print("\t");
  Serial.print(joyStickOneYValue);
  Serial.print("\t");
  Serial.println(joyStickOneButtonState);
  
}
