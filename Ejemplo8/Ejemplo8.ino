int Byterecibido = 79;

void setup() {

Serial.begin(9600);
}

void loop() {

if (Serial.available()>0){
  Byterecibido=Serial.read();
  Serial.print("He recibido el dato: ");
  Serial.print(Byterecibido,DEC);
  Serial.print(" que es el ASCII: ");
  Serial.print(byte(Byterecibido));
  Serial.print(" y en binario: ");
  Serial.println(Byterecibido,BIN);
}
}
// Dime que agregue
