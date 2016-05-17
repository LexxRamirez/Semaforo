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
  display(5000);
  digitalWrite(red, LOW);
  display(500);
  
  for(int i=0; i<=4; i++){
  digitalWrite(yellow, HIGH);
  display(1000);
  digitalWrite(yellow, LOW);
  display(500);
  }
  digitalWrite(green, HIGH);
  display(5000);
  digitalWrite(green, LOW);
  display(500);
  
}
