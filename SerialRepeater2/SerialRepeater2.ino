#define Serial_ESP Serial
#define Serial_Debug SerialUSB

#define Serial_Baud 115200

// =======================================================================
void setup() {
  
Serial_ESP.begin(Serial_Baud);
Serial_Debug.begin(Serial_Baud);
}
// =======================================================================
char aux;
void loop() {
if (Serial_ESP.available()) {
 aux= Serial_ESP.read();
Serial_Debug.write(aux);
}
Serial_Debug.flush();

if (Serial_Debug.available()) {
 aux=Serial_Debug.read();
Serial_ESP.write(aux);
}
Serial_ESP.flush();
}
