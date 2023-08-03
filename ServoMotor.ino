void servoM (){
  if (distance_cm <= 4){
    myServo.write(0);
    }
   else{
    myServo.write(120);
    }
  }
