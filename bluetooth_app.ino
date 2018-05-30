int state;
void setup() {
Serial.begin(38400);
pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
if(Serial.available()>0){
  state=Serial.read();
  Serial.println(state);
  if(state==120)
  digitalWrite(LED_BUILTIN,HIGH);
  else if(state==0)
    digitalWrite(LED_BUILTIN,LOW);

}

}
