void counter_increment(){
  if(flag){
      counter = counter + 1;
      digitalWrite(13, HIGH);
      delay(50);
      digitalWrite(13, LOW);
      flag = 0;
      Serial.println("Counter: ");
      Serial.print(counter);
  }
}

void mirror_track1(){
  Serial.println("mirror_track1");
  if((counter_right_condns || counter_left_condns || node_condns || spl_node ) && flag == 1){
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
    turnLeft();
    z = 0;
    
  }
  else if(counter == 3 && z == 1){
    forward();
    delay(fwd_delay);
    z = 0;
  }
  else if(counter == 4 && z == 1){
    turnRight();
    z = 0;
  }
  else if(counter == 5 && z == 1){
    forward();
    delay(fwd_delay);
    z = 0;
  }
  else if(counter == 6 && z == 1){
    turnRight();
    z = 0;
  }
  else if(counter == 7 && z == 1){
    forward();
    delay(fwd_delay);
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
    forward();
    delay(fwd_delay);
    z = 0;
  }
  else if(counter == 11 && z == 1){
    turnRight();
    z = 0;
  }
  else if(counter == 12 && z == 1){
    turnLeft();
    z = 0;
  }
  else if(counter == 13 && z == 1){
    forward();
    delay(fwd_delay);
    z = 0;
  }
  else if(counter == 14 && z == 1){
    forward();
    delay(fwd_delay);
    halt();
    delay(halt_delay);
    sharpLeft();
    delay(special_condn_first_part_of_sharp_turn);
    Serial.println("First part of sharp turn completed");
    sensor_read();

    while(forward_condns != 1)
    {
      
      sharpLeft();
      sensor_read();
      Serial.println("Second part of sharp turn ongoing");
      }
      halt();
      delay(halt_delay);     
    z = 0;
  }
  else if(counter == 15 && z == 1){
  turnRight();
  forward();
  delay(fwd_delay);
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
