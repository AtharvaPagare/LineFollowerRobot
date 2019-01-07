
void track1(){
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
    turnLeft();
    Serial.println("turnRightChaNantar");
    z = 0;
    Serial.println("z=0");
  }
  else if(counter == 2 && z == 1 ){
    turnRight();
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
    forward();
    delay(fwd_delay);
    z = 0;
  }
  else if(counter == 6 && z == 1){
    turnLeft();
    z = 0;
  }
  else if(counter == 7 && z == 1){
    forward();
    delay(fwd_delay);
    z = 0;
  }
  else if(counter == 8 && z == 1){
    turnRight();
    z = 0;
  }
  else if(counter == 9 && z == 1){
    turnLeft();
    z = 0;
  }
  else if(counter == 10 && z == 1){
    forward();
    delay(fwd_delay);
    z = 0;
  }
  else if(counter == 11 && z == 1){
    turnLeft();
    z = 0;
  }
  else if(counter == 12 && z == 1){
    turnRight();
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
    sharpRight();
    delay(special_condn_first_part_of_sharp_turn);
    Serial.println("First part of sharp turn completed");
    sensor_read();
     while(forward_condns != 1)
    {
      sharpRight();
      sensor_read();
      
      Serial.println("Second part of sharp turn ongoing");
      }
      halt();
      delay(halt_delay);
    z = 0;
  }  
 else if(counter == 15 && z == 1){
  turnLeft();
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

void track2(){
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
    turnLeft();
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
    turnRight();
    z = 0;
  }
  else if(counter == 5 && z == 1){
  turnLeft();   
    z = 0;
  }
  else if(counter == 6 && z == 1){
    forward();
    delay(fwd_delay);
    z = 0;
  }
  else if(counter == 7 && z == 1){
    turnLeft();
    z = 0;
  }
  else if(counter == 8 && z == 1){
    turnRight();
    z = 0;
  }
  else if(counter == 9 && z == 1){
    turnLeft();
    z = 0;
  }
  else if(counter == 10 && z == 1){
    turnRight();
    z = 0;
  }
  else if(counter == 11 && z == 1){
    turnRight();
    z = 0;
  }
  else if(counter == 12 && z == 1){
    forward();
    delay(fwd_delay);
    z = 0;
  }
  else if(counter == 13 && z == 1){
    turnLeft();
    z = 0;
  }
  else if(counter == 14 && z == 1){
    forward();
    z = 0;
  }
  else if(counter == 15 && z == 1){
    forward();
    z = 0;
  }
  else if(counter == 16 && z == 1){
    forward();
    delay(400);
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

void track3(){
    if((counter_right_condns || counter_left_condns || node_condns || spl_node || y_condns) && flag == 1){
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
    turnRight();
    z = 0;
    Serial.println("z=0");
  }
  else if(counter == 2 && z == 1){
    forward();
    delay(fwd_delay);
    z = 0;
    Serial.println("z=0");
  }
  else if(counter == 3 && z == 1){
    turnLeft();
    z = 0;
    Serial.println("z=0");
  }
  else if(counter == 4 && z == 1){
    turnRight();
    z = 0;
    Serial.println("z=0");
  }  
    else if(counter == 5 && z == 1){
    forward();
    delay(fwd_delay);
    z = 0;
    Serial.println("z=0");
  }
   else if(counter == 6 && z == 1){
    turnLeft();
    z = 0;
    Serial.println("z=0");
  }
    else if(counter == 7 && z == 1){
    forward();
    z = 0;
    Serial.println("z=0");
  }
   else if(counter == 8 && z == 1){
    turnRight();
    z = 0;
    Serial.println("z=0");
  }
   else if(counter == 9 && z == 1){
    forward();
    delay(fwd_delay);
    z = 0;
    Serial.println("z=0");
  }
   else if(counter == 10 && z == 1){
    forward();
    delay(fwd_delay);
    z = 0;
    Serial.println("z=0");
  }  
     else if(counter == 11 && z == 1){
    turnRight();
    z = 0;
    Serial.println("z=0");
  }
     else if(counter == 12 && z == 1){
    turnLeft();
    z = 0;
    Serial.println("z=0");
  }
     else if(counter == 13 && z == 1){
   turnLeft(); 
    z = 0;
    Serial.println("z=0");
  }
       else if(counter == 14 && z == 1){
   turnRight(); 
    z = 0;
    Serial.println("z=0");
  }
       else if(counter == 15 && z == 1){
   turnRight(); 
    z = 0;
    Serial.println("z=0");
  }
         else if(counter == 16 && z == 1){
   turnRight(); 
    z = 0;
    Serial.println("z=0");
  }
         else if(counter == 17 && z == 1){
   turnRight(); 
    z = 0;
    Serial.println("z=0");
  }
         else if(counter == 18 && z == 1){
   turnRight(); 
    z = 0;
    Serial.println("z=0");
  }
         else if(counter == 19 && z == 1){
   turnRight(); 
    z = 0;
    Serial.println("z=0");
  }
         else if(counter == 20 && z == 1){
   turnRight(); 
    z = 0;
    Serial.println("z=0");
  }
         else if(counter == 21 && z == 1){
   turnRight(); 
    z = 0;
    Serial.println("z=0");
  }
         else if(counter == 22 && z == 1){
   turnLeft(); 
    z = 0;
    Serial.println("z=0");
  }
         else if(counter == 23 && z == 1){
   turnRight(); 
    z = 0;
    Serial.println("z=0");
  }
         else if(counter == 24 && z == 1){
   turnLeft(); 
   forward();
   delay(100);
    z = 0;
    Serial.println("z=0");
  }
  else{
    lineFollower();
    flag = 1;
  }
}



void mirror_track3(){
  if((counter_right_condns || counter_left_condns || node_condns || spl_node || y_condns) && flag == 1){
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
    turnLeft();
    z = 0;
    Serial.println("z=0");
  }
  else if(counter == 2 && z == 1){
    forward();
    delay(fwd_delay);
    z = 0;
    Serial.println("z=0");
  }
  else if(counter == 3 && z == 1){
    turnRight();
    z = 0;
    Serial.println("z=0");
  }
  else if(counter == 4 && z == 1){
    turnLeft();
    z = 0;
    Serial.println("z=0");
  }  
    else if(counter == 5 && z == 1){
    forward();
    delay(fwd_delay);
    z = 0;
    Serial.println("z=0");
  }
   else if(counter == 6 && z == 1){
    turnRight();
    z = 0;
    Serial.println("z=0");
  }
    else if(counter == 7 && z == 1){
    forward();
    z = 0;
    Serial.println("z=0");
  }
   else if(counter == 8 && z == 1){
    turnLeft();
    z = 0;
    Serial.println("z=0");
  }
   else if(counter == 9 && z == 1){
    forward();
    delay(fwd_delay);
    z = 0;
    Serial.println("z=0");
  }
   else if(counter == 10 && z == 1){
    forward();
    delay(fwd_delay);
    z = 0;
    Serial.println("z=0");
  }  
     else if(counter == 11 && z == 1){
    turnLeft();
    z = 0;
    Serial.println("z=0");
  }
     else if(counter == 12 && z == 1){
    turnRight();
    z = 0;
    Serial.println("z=0");
  }
     else if(counter == 13 && z == 1){
   turnRight(); 
    z = 0;
    Serial.println("z=0");
  }
       else if(counter == 14 && z == 1){
   turnLeft(); 
    z = 0;
    Serial.println("z=0");
  }
       else if(counter == 15 && z == 1){
   turnLeft(); 
    z = 0;
    Serial.println("z=0");
  }
         else if(counter == 16 && z == 1){
   turnLeft(); 
    z = 0;
    Serial.println("z=0");
  }
         else if(counter == 17 && z == 1){
   turnLeft(); 
    z = 0;
    Serial.println("z=0");
  }
         else if(counter == 18 && z == 1){
   turnLeft(); 
    z = 0;
    Serial.println("z=0");
  }
         else if(counter == 19 && z == 1){
   turnLeft(); 
    z = 0;
    Serial.println("z=0");
  }
         else if(counter == 20 && z == 1){
   turnLeft(); 
    z = 0;
    Serial.println("z=0");
  }
         else if(counter == 21 && z == 1){
   turnLeft(); 
    z = 0;
    Serial.println("z=0");
  }
         else if(counter == 22 && z == 1){
   turnRight(); 
    z = 0;
    Serial.println("z=0");
  }
         else if(counter == 23 && z == 1){
   turnLeft(); 
    z = 0;
    Serial.println("z=0");
  }
         else if(counter == 24 && z == 1){
   turnRight(); 
   forward();
   delay(100);
    z = 0;
    Serial.println("z=0");
  }
  else{
    lineFollower();
    flag = 1;
  }
}
void tracks(){
  if(sw0 == HIGH && sw1 == LOW && sw2 == LOW && sw3 == LOW){
    track1();
  }
  else if(sw0 == LOW && sw1 == HIGH && sw2 == LOW && sw3 == LOW){
    track2();
  }
  else if(sw0 == LOW && sw1 == LOW && sw2 == HIGH && sw3 == LOW){
    track3();
  }
  else if(sw0 == HIGH && sw1 == LOW && sw2 == LOW && sw3 == HIGH){
    mirror_track1();
  }  
  else if(sw0 == LOW && sw1 == HIGH && sw2 == LOW && sw3 == HIGH){
    mirror_track2();
  }
  else if(sw0 == LOW && sw1 == LOW && sw2 == HIGH && sw3 == HIGH){
    mirror_track3();
  }    
}
