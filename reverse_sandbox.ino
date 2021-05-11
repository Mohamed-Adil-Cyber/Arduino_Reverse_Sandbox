#include <EEPROM.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    if (Serial.available() > 1) {
    
    // read the incoming byte:
     EEPROM.write(1,Serial.read());

    // say what you got:
    Serial.print("I received: ");
    EEPROM.write(0, 4);
    
  EEPROM.write(1, EEPROM.read(1)-EEPROM.read(0)); 
  Serial.print(char(EEPROM.read(1)));
  Serial.println();
  for (int i = 0 ; i < EEPROM.length() ; i++) {

EEPROM.write(i, 0);

}
  }


  


}
