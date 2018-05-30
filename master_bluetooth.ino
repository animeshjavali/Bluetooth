int data;
void setup() {
 Serial.begin(9600); // put your setup code here, to run once:
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
//pinMode(13,OUTPUT);

}

void loop() {
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(5,LOW);

while(Serial.available()==0);

data=Serial.parseInt();
  Serial.println(data);
  if(data==1){
  digitalWrite(5,HIGH);
  delay(250);
  }
  if(data==2){
  digitalWrite(6,HIGH);  delay(250);

  }
  if(data==3){
    digitalWrite(7,HIGH);  delay(250);

  }
}
