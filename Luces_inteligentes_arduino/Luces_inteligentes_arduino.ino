
int pinLed1 = 12;
int pinLed2 = 11;
int Sensor =2;
const int Sonido = 4;
int estadoSonido;

void setup() {
  // put your setup code here, to run once:
pinMode(Sensor, INPUT);
Serial.begin(9600);

pinMode(pinLed1, OUTPUT);
pinMode(pinLed2, OUTPUT);
pinMode(Sonido, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int V = digitalRead(Sensor);
  int estadoSonido = digitalRead(Sonido);
  
  Serial.println(V);
  Serial.println(estadoSonido);
if (V == HIGH){
  digitalWrite(pinLed1,HIGH);
  digitalWrite(pinLed2,HIGH);
  
} 
else if (estadoSonido == LOW){
 digitalWrite(pinLed1,LOW);
 digitalWrite(pinLed2,LOW);
  
}



}
