int led=15;
int pb2=32;
int buttonStatusSaya = 0; 
void setup(){
  pinMode(led,OUTPUT);
  pinMode(pb2,INPUT);
}

void loop(){
  
  buttonStatusSaya = digitalRead(pb2);
  
  if(buttonStatusSaya==HIGH){
    digitalWrite(led,HIGH);
  }else
  {
    digitalWrite(led,LOW);
  }
  
}