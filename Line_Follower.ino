void lineFollower()
{
  sensor_read();
  
  if ((sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 1 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0) ||      //0 0 0 1 0 0 0 
      (sen[0] == 0 && sen[1] == 0 && sen[2] == 1 && sen[3] == 1 && sen[4] == 1 && sen[5] == 0 && sen[6] == 0) ||      //0 0 1 1 1 0 0 
      (sen[0] == 0 && sen[1] == 0 && sen[2] == 1 && sen[3] == 1 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0) ||      //0 0 1 1 0 0 0
      (sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 1 && sen[4] == 1 && sen[5] == 0 && sen[6] == 0)         //0 0 0 1 1 0 0 
      )
  {
    forward(); 
    Serial.println("forward");
  }
  
  else if ((sen[0] == 0 && sen[1] == 1 && sen[2] == 1 && sen[3] == 0 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0) ||   //0 1 1 0 0 0 0
           (sen[0] == 1 && sen[1] == 1 && sen[2] == 0 && sen[3] == 0 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0) ||   //1 1 0 0 0 0 0
           (sen[0] == 0 && sen[1] == 0 && sen[2] == 1 && sen[3] == 0 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0) ||   //0 0 1 0 0 0 0
           (sen[0] == 1 && sen[1] == 0 && sen[2] == 0 && sen[3] == 0 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0) ||   //1 0 0 0 0 0 0
           (sen[0] == 0 && sen[1] == 1 && sen[2] == 0 && sen[3] == 0 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0)    //0 1 0 0 0 0 0
           )
  {
    slightLeft();
    Serial.println("slightLeft");
  }
  
  else if ((sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 0 && sen[4] == 1 && sen[5] == 1 && sen[6] == 0) ||  //0 0 0 0 1 1 0
           (sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 0 && sen[4] == 1 && sen[5] == 0 && sen[6] == 0) ||  //0 0 0 0 1 0 0
           (sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 0 && sen[4] == 0 && sen[5] == 0 && sen[6] == 1) ||  //0 0 0 0 0 0 1
           (sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 0 && sen[4] == 0 && sen[5] == 1 && sen[6] == 0) ||  //0 0 0 0 0 1 0
           (sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 0 && sen[4] == 1 && sen[5] == 1 && sen[6] == 0) ||  //0 0 0 0 1 1 0
           (sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 0 && sen[4] == 0 && sen[5] == 1 && sen[6] == 1)     //0 0 0 0 0 1 1
           )
  {
    slightRight();
    Serial.println("slightRight");
  }
/*
  else if ((sen[0] == 1 && sen[1] == 1 && sen[2] == 1 && sen[3] == 1 && sen[4] == 1 && sen[5] == 0 && sen[6] == 0) ||      //1 1 1 1 1 0 0 
           (sen[0] == 1 && sen[1] == 1 && sen[2] == 1 && sen[3] == 1 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0) ||      //1 1 1 1 0 0 0 
           (sen[0] == 1 && sen[1] == 1 && sen[2] == 1 && sen[3] == 0 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0)       //1 1 1 0 0 0 0 
           
           )
  {
    turnLeft();
    Serial.println("turnLeft");
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    delay(100);
  }

  else if ((sen[0] == 0 && sen[1] == 0 && sen[2] == 1 && sen[3] == 1 && sen[4] == 1 && sen[5] == 1 && sen[6] == 1) ||      //0 0 1 1 1 1 1  
           (sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 1 && sen[4] == 1 && sen[5] == 1 && sen[6] == 1) ||      //0 0 0 1 1 1 1  
           (sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 0 && sen[4] == 1 && sen[5] == 1 && sen[6] == 1)      //0 0 0 0 1 1 1 
          
           )
  {
    turnRight(); 
    Serial.println("turnRight");
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    delay(100);    
  }
  else if ((sen[0] == 1 && sen[1] == 1 && sen[2] == 1 && sen[3] == 1 && sen[4] == 1 && sen[5] == 1 && sen[6] == 1)       //1 1 1 1 1 1 1  
           )
  {
    halt();

   }

   */
// 
  else if (sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 0 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0          //0 0 0 0 0 0 0  
            )
     {
      halt();
      }
      
  else
  { 
    forward();
   }
   
}




//All Conditions:
/*
  1 0 0 0 0 0 0  stupid
  0 1 0 0 0 0 0  stupid
  0 0 1 0 0 0 0  stupid
  0 0 0 1 0 0 0  f       *
  0 0 0 0 1 0 0  stupid 
  0 0 0 0 0 1 0  stupid
  0 0 0 0 0 0 1  stupid
  
  1 1 0 0 0 0 0  shl *
  0 1 1 0 0 0 0  sl  *
  0 0 1 1 0 0 0  f   *
  0 0 0 1 1 0 0  f   *
  0 0 0 0 1 1 0  sr  *
  0 0 0 0 0 1 1  shr *
  
  1 1 1 0 0 0 0  shl *
  0 1 1 1 0 0 0  sl  *
  0 0 1 1 1 0 0  f   *
  0 0 0 1 1 1 0  sr  *
  0 0 0 0 1 1 1  shr *
  
  1 1 1 1 0 0 0  shl *
  0 1 1 1 1 0 0  
  0 0 1 1 1 1 0 
  0 0 0 1 1 1 1  shr *
  
  1 1 1 1 1 0 0  shl *
  0 1 1 1 1 1 0 
  0 0 1 1 1 1 1  shr *
  
  1 1 1 1 1 1 0  shl 
  0 1 1 1 1 1 1  shr 

  1 1 1 1 1 1 1  hlt *

  0 0 0 0 0 0 0  hlt *
  
 */

/*
   forward:
   0 0 0 1 0 0 0 
   0 0 1 1 1 0 0 
   0 0 1 1 0 0 0
   0 0 0 1 1 0 0 

   slight left:
   0 1 1 1 0 0 0
   0 1 1 0 0 0 0
   
   slight Right:
   0 0 0 1 1 1 0
   0 0 0 0 1 1 0
     
   sharp left:
   1 1 1 1 1 0 0
   1 1 1 1 0 0 0 
   1 1 1 0 0 0 0 
   1 1 0 0 0 0 0 
   
   sharp right:
   0 0 1 1 1 1 1
   0 0 0 1 1 1 1 
   0 0 0 0 1 1 1 
   0 0 0 0 0 1 1 

   halt:
   0 0 0 0 0 0 0 
   1 1 1 1 1 1 1 
 */
