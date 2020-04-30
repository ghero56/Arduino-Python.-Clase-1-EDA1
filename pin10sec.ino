void setup(){
  // declaración de variables
  pinMode(11,OUTPUT); // verde
  pinMode(10,OUTPUT); // naranja
  pinMode(9,OUTPUT);  // rojo
}

void loop(){
  // se ejecuta infinitamente
  digitalWrite(11,HIGH);
  delay(2000);
  digitalWrite(11,LOW); // verde
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(10,LOW); // naranja
  digitalWrite(9,HIGH);
  delay(2000);
  digitalWrite(9,LOW); // rojo
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(10,LOW); // naranja
}
