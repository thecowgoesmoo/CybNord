                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          /*
MIDI On/Off Messages
By Amanda Ghassaei
July 2012
https://www.instructables.com/id/Send-and-Receive-MIDI-with-Arduino/

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

*/
 

byte i = 0;
byte val = 0; //0;

byte ctr = 0;

byte draws [6] = {0, 0, 0, 0, 0, 0};
byte ccCh = 0;
byte ccVal = 0;
byte command = 176;


void setup() {
  //  Set MIDI baud rate:
  Serial.begin(9600);
}

void loop() {
  delay(30);
  ctr = ctr+1;
  for (i=0; i<14; ++i) {
}
//digitalWrite(LED_BUILTIN, globalNoteOn);
for (i=0; i<6; ++i) {
  val = analogRead(i);
  val = val/2;
  if (abs(val-draws[i])>5){
    draws[i] = val;
    ccCh = i + 16;
    MIDImessage(command,ccCh,val);
  } 
}
}

//send MIDI message
void MIDImessage(byte command, byte ccCh, byte ccVal) {
Serial.write(command);
Serial.write(ccCh);
Serial.write(ccVal);

//Serial.print(command);
//Serial.print(' ');
//Serial.print(ccCh);
//Serial.print(' ');
//Serial.println(ccVal);
//Serial.write(command);//send note on or note off command 
//Serial.write(MIDInote);//send pitch data
//Serial.write(MIDIvelocity);//send velocity data
//Serial.print("noteON, clock cycle: ");
//Serial.println(ctr);
}
