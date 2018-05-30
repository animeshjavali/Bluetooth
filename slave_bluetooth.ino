int left,right,brake;
void setup() {
Serial.begin(9600); 
pinMode(left,INPUT);
pinMode(right,INPUT);
pinMode(brake,INPUT);
}

void loop() {
left=digitalRead(8);
right=digitalRead(9);
brake=digitalRead(10);
if(left==1)
Serial.println('1');
//Serial.print(",");
if(right==1)
Serial.println('2');
//Serial.print(",");
if(brake==1)
Serial.println('3');

delay(250);

}
