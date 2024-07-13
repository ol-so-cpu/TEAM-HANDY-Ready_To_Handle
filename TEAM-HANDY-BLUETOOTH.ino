#include "BluetoothSerial.h"
BluetoothSerial serialBT;
char cmd;

void setup() {
  Serial.begin(115200);
  serialBT.begin("Esp32-BT");
  pinMode(5, OUTPUT);
}

void loop() {
  if(serialBT.available()){
    cmd=serialBT.read();
  }
if(cmd == '1'){
  digitalWrite(5,HIGH);
}
if(cmd == '0'){
  digitalWrite(5,LOW);
  Serial.println(cmd);
}
delay(20);
}
