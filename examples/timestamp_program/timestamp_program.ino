// How to timestamp your program at compile time.

#include "mizraith_DateTime.h"

const DateTime COMPILED_ON = DateTime(__DATE__, __TIME__);  

void serialPrintHeaderString() {
  Serial.println();
  Serial.println(F("#####HEADER#####"));
  Serial.println(F("--------------------------------------------------"));  
  Serial.println(F("Example timestamp firmware at compile time."));
  Serial.println(F("--------------------------------------------------"));  
  Serial.println(F("Red Byer    http://github.com/mizraith"));
  Serial.println(F("VERSION DATE: 12/29/2015"));
  Serial.print(F("COMPILED ON: "));
  Serial.print(COMPILED_ON.month());
  Serial.print(F("/"));
  Serial.print(COMPILED_ON.day());
  Serial.print(F("/"));
  Serial.print(COMPILED_ON.year());
  Serial.print(F(" @ "));
  Serial.print(COMPILED_ON.hour(), DEC);
  Serial.println(COMPILED_ON.minute(), DEC); 
  Serial.println(F("--------------------------------------------------"));  
  Serial.println();
}

void setup () {
    Serial.begin(57600);
    serialPrintHeaderString();
}

void loop () {
}
