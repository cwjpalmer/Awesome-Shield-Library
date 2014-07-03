#include <Awesome.h>

Awesome awesome;

void setup() {
  Serial.begin(9600);
  awesome.rgbLedOn(191,80,239);
  delay(500);
  Serial.print("WHITE ");
  Serial.println(WHITE);
  Serial.print("RED ");
  Serial.println(RED);
  Serial.print("GREEN ");
  Serial.println(GREEN);
  Serial.print("BLUE ");
  Serial.println(BLUE);
  Serial.print("YELLOW ");
  Serial.println(YELLOW);
  Serial.print("MAGENTA ");
  Serial.println(MAGENTA);
  Serial.print("CYAN ");
  Serial.println(CYAN);
  //awesome.diagnostic();
}

void loop() {
  bool upperFloatSubmerged = awesome.switchRead();

  if (upperFloatSubmerged) {
    openDrain();
  } else {
    closeDrain();
  }

  delay(1000);
  awesome.rgbLedOn(100);
  delay(1000);

}

void openDrain() {
  awesome.rgbLedOn(WHITE);
}

void closeDrain() {
  awesome.rgbLedOn(GREEN);
}