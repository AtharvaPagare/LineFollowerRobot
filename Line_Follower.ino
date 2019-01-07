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



