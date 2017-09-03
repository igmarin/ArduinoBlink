int Byterecibido = 79;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
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
