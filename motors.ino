

void motors(){
  if (distance_cm <= 7){
  digitalWrite(mA_out1, HIGH);
  digitalWrite(mA_out2, LOW);
  digitalWrite(mB_out1,HIGH);
  digitalWrite(mB_out2,LOW);
  }
  else{
    digitalWrite(mA_out1, LOW);
  digitalWrite(mA_out2, HIGH);
   digitalWrite(mB_out1,LOW);
  digitalWrite(mB_out2,HIGH);
    }
}
