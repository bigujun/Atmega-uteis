#define SerialA Serial
#define SerialB Serial1
#define BAUD 115200
void setup() {
  SerialA.begin(BAUD);
  SerialB.begin(BAUD);

  delay(1000);
}

void loop() {

  
  if(SerialA.available()){
    byte c=SerialA.read();
    SerialB.write(c);
  }

  if(SerialB.available()){
    byte c=SerialB.read();
    SerialA.write(c);
  }
  
}
