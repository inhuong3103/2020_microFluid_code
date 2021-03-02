//String receive_from_pi();
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() 
{
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0) 
  {
    String pi_cmd = Serial.readStringUntil('\n');
    Serial.println(pi_cmd);
    if(pi_cmd == "p1")
  {
    Serial.println("HIHI");
    delay(1000);
  }
  if(pi_cmd == "q1")
  {
    Serial.println("Interrrupt");
    delay(2000);
  }
  }
  //String pi_cmd = "";
  //pi_cmd = receive_from_pi();
  
}

//String receive_from_pi(){}
