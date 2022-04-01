//maping out input from joysticks

const int readJoyStickOneX = 0;
const int readJoyStickOneY = 1;
const int readJoyStickOneButton = 2;

int joyStickOneXValue = 0;
int joyStickOneYValue = 0;
int joyStickOneButtonValue = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  joyStickOneXValue =analogRead(readJoyStickOneX);
  joyStickOneYValue =analogRead(readJoyStickOneY);
  joyStickOneButtonValue = digitalRead(readJoyStickOneButton);

  Serial.print(joyStickOneYValue);
  Serial.print("\t");
  Serial.print(joyStickOneXValue);
  Serial.print("\t");
  Serial.println(joyStickOneButtonValue);
  
}
