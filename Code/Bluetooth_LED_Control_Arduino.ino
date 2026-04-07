#include <SoftwareSerial.h> // used to create SW based UART as arduino has only one HW UART

SoftwareSerial BT(2, 3); // RX, TX

int led = 13;

void setup() {
  pinMode(led, OUTPUT);
  
  Serial.begin(9600);
  BT.begin(9600);
}

void loop() {
  if (BT.available()) { // checks: is data coming from phone?
    char data = BT.read();

    if (data == '1') {
      digitalWrite(led, HIGH); // LED ON
    }
    else if (data == '0') {
      digitalWrite(led, LOW); // LED OFF
    }
  }
}