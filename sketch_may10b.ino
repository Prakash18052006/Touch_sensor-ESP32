int ledPin = 2;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}
void loop() {
 if(touchRead(T0) < 30){
  digitalWrite(ledPin, HIGH);
 }
 else{
    digitalWrite(ledPin, LOW);
 }
  delay(200);
}
