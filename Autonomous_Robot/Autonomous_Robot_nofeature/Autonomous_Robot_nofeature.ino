#include <Servo.h>

Servo servoTurn;

Servo servoGo;

int countLight = 0;
int countTurn = 0;

int lightHigh = 0;
int lightScan = 0;
int lightNow = 0;

bool scan = false;
bool record = false;

void stopTurn() {
  servoTurn.writeMicroseconds(1465);
}

void stopMove() {
  servoGo.writeMicroseconds(1500);
}

void go() {
  servoGo.write(170);
}

void reverse() {
  servoGo.write(190);
}

void turn() {
  servoTurn.write(70);
}
void reset() {
  servoTurn.write(110);
}

void setup() {
  Serial.begin(9600);
  servoTurn.attach(10);
  servoGo.attach(9);
  stopMove();
  delay(2000);
}

void loop() {
  // simulate task
  go();
  delay(1000);
  reverse();
  delay(1000);
  stopMove();
}
