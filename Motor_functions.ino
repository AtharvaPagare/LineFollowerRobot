// calibrate motors for precise handling(hence better accuracy) and perfect overall timing.

void forward()
  {
    analogWrite(LMF,high_speed);
    analogWrite(RMF,high_speed);
    analogWrite(LMB,zero_speed);
    analogWrite(RMB,zero_speed);
    Serial.println("fwd");

  }

  void sharpRight()
  {
    analogWrite(LMF, med_speed);
    analogWrite(RMF, zero_speed);
    analogWrite(LMB, zero_speed);
    analogWrite(RMB, med_speed);
    
  }
 
  void sharpLeft()
  {
    analogWrite(LMF,zero_speed);
    analogWrite(RMF, med_speed);
    analogWrite(LMB, med_speed);
    analogWrite(RMB,zero_speed);
  }
 
 
 void backward()
  {
    analogWrite(RMF,zero_speed);
    analogWrite(LMF,zero_speed);
    analogWrite(LMB,high_speed);
    analogWrite(RMB,high_speed);
  }

  void slightRight()
  {
    analogWrite(LMF,high_speed);
    analogWrite(RMF,zero_speed);
    analogWrite(LMB,zero_speed);
    analogWrite(RMB,zero_speed);
    Serial.println("slr");
  }
 
 void slightLeft()
  {
    analogWrite(LMF,zero_speed);
    analogWrite(LMB,zero_speed);
    analogWrite(RMF,high_speed);
    analogWrite(RMB,zero_speed);
    Serial.println("sll");
  }

 void halt()
  {
    analogWrite(LMF,zero_speed);
    analogWrite(RMF,zero_speed);
    analogWrite(LMB,zero_speed);
    analogWrite(RMB,zero_speed);
        Serial.println("halt");
  }

void turnRight(){
    forward();
    delay(fwd_delay);
    halt();
    delay(halt_delay);
    sharpRight();
    delay(first_part_of_sharp_turn);
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
        
    }

void turnLeft(){
    forward();
    delay(fwd_delay);
    halt();
    delay(halt_delay);
    sharpLeft();
    delay(first_part_of_sharp_turn);
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
  }

  


