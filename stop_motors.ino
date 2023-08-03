void stop_motors(){
  if (distance_cm <= 4){
  digitalWrite(mA_out1, LOW);
  digitalWrite(mA_out2, LOW);
  digitalWrite(mB_out1,LOW);
  digitalWrite(mB_out2,LOW);
  }
}
