void mirror_track2(){
  if( (counter_right_condns || counter_left_condns || node_condns || spl_node ) && flag == 1){
      counter = counter + 1;  
      Serial.println("counter_incr");
      flag = 0;
      Serial.println("flaag_zero");
      z = 1;
      Serial.println("z=1");
      digitalWrite(13, HIGH);
      delay(50);
      digitalWrite(13, LOW);
      Serial.println("Counter: ");
      Serial.print(counter);
      }

  if(counter == 1 && z == 1){
    Serial.println("turnRightChaAadhi");
    turnRight();
    Serial.println("turnRightChaNantar");
    z = 0;
    Serial.println("z=0");
  }
  else if(counter == 2 && z == 1 ){
    forward();
    delay(fwd_delay);
    z = 0;
    
  }
  else if(counter == 3 && z == 1){
    forward();
    delay(fwd_delay);
    z = 0;
  }
  else if(counter == 4 && z == 1){
    turnLeft();
    z = 0;
  }
  else if(counter == 5 && z == 1){
  turnRight();   
    z = 0;
  }
  else if(counter == 6 && z == 1){
    forward();
    delay(fwd_delay);
    z = 0;
  }
  else if(counter == 7 && z == 1){
    turnRight();
    z = 0;
  }
  else if(counter == 8 && z == 1){
    turnLeft();
    z = 0;
  }
  else if(counter == 9 && z == 1){
    turnRight();
    z = 0;
  }
  else if(counter == 10 && z == 1){
    turnLeft();
    z = 0;
  }
  else if(counter == 11 && z == 1){
    turnLeft();
    z = 0;
  }
  else if(counter == 12 && z == 1){
    forward();
    delay(fwd_delay);
    z = 0;
  }
  else if(counter == 13 && z == 1){
    turnRight();
    z = 0;
  }
  else if(counter == 14 && z == 1){
    forward();
    z = 0;
  }
  else if(counter == 13 && z == 1){
    forward();
    z = 0;
  }
  else if(counter == 15 && z == 1){
    forward();
    delay(350);
    halt();
    z = 0;
  } 
 

//if(counter < 16){
//  lineFollower();
//}
else{
  lineFollower();
  flag = 1;
}
}
