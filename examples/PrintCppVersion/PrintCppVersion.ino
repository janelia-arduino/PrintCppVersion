#include <PrintCppVersion.h>

const long BAUD = 115200;
const int LOOP_DELAY = 1000;

void setup()
{
  Serial.begin(BAUD);
}

void loop()
{
  printCppVersion();
  delay(LOOP_DELAY);
}
