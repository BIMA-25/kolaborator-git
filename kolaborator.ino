int led=5;
int pb2=32;
int button = 0; 
void setup(){
  pinMode(led,OUTPUT);
  pinMode(pb2,INPUT);
}

void loop(){
  
  button = digitalRead(pb2);
  
  if(button==HIGH){
    digitalWrite(led,HIGH);
  }else
  {
    digitalWrite(led,LOW);
  }
  
}