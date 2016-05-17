int red = 8;
int yellow = 12;
int green = 13;

void setup(){
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop(){
  digitalWrite(red, HIGH);
  delay(5000);
  digitalWrite(red, LOW);
  delay(500);
  
  for(int i=0; i<=4; i++){
    digitalWrite(yellow, HIGH);
    delay(1000);
    digitalWrite(yellow, LOW);
    delay(500);
  }
  
  digitalWrite(green, HIGH);
  delay(5000);
  digitalWrite(green, LOW);
  delay(500);
}
