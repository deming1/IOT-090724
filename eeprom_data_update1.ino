// C code
//

#include <EEPROM.h>
void setup()
{
  int addr, data = 0;
  Serial.begin(9600);
  for (addr = 0; addr < 1024; addr++) {
    // write value 12 to cell
    // This performs as EEPROM.write(addr, data)
    EEPROM.write(3, 13);
  }
  for ( addr = 0; addr < 1024; addr++) {
    Serial.print (EEPROM.read(3));
  }
} 

void loop()
{
} 