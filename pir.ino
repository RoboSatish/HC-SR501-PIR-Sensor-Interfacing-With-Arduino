 
int led = 13;                
int pir= 2;              
int   status= LOW;             
int val = 0;                 
void setup() {
  pinMode(led, OUTPUT);      
  pinMode(sensor, INPUT);   
  Serial.begin(9600);       
}

void loop(){
  val = digitalRead(pir);   
  if (val == HIGH) {           
    digitalWrite(led, HIGH);   
    delay(100);               
    if (  status== LOW) {
      Serial.println("Motion detected......."); 
        status= HIGH;      
    }
  } 
  else {
      digitalWrite(led, LOW); 
      delay(200);            
      
      if (  status== HIGH){
        Serial.println("Motion stopped.......");
          status= LOW;       
    }
  }
}