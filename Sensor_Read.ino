void sensor_read()
{
  // Feeding sensor readings to analog value array.
  seninput[0]= analogRead(A8);
  seninput[1]= analogRead(A9);
  seninput[2]= analogRead(A10);
  seninput[3]= analogRead(A11);
  seninput[4]= analogRead(A12);
  seninput[5]= analogRead(A13);
  seninput[6]= analogRead(A14);



  //Analog to digital conversion of the 7 sensor readings
  for (int i = 0; i<=7; i++)
  {
      if (seninput[i] > threshold[i])
      {
        sen[i] = 0;
      }
      else
      {
        sen[i] = 1;
      }
   }

   //Comment this Out After Testing
  Serial.println();
  for (int i = 0; i<= 7; i++)
  {
      Serial.print(sen[i]);
      Serial.print(" ");
      
    }
    Serial.print("\t");

forward_condns = ( (sen[0] == 0 && sen[1] == 0 && sen[2] == 1 && sen[3] == 1 && sen[4] == 1 && sen[5] == 0 && sen[6] == 0)       //0 0 1 1 1 0 0 
                 );

right_condns = ((sen[0] == 0 && sen[1] == 1 && sen[2] == 1 && sen[3] == 1 && sen[4] == 1 && sen[5] == 1 && sen[6] == 1) ||       //0 1 1 1 1 1 1  
                  (sen[0] == 0 && sen[1] == 0 && sen[2] == 1 && sen[3] == 1 && sen[4] == 1 && sen[5] == 1 && sen[6] == 1) ||      //0 0 1 1 1 1 1  
                  (sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 1 && sen[4] == 1 && sen[5] == 1 && sen[6] == 1) ||       //0 0 0 1 1 1 1  
                  (sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 0 && sen[4] == 1 && sen[5] == 1 && sen[6] == 1)          //0 0 0 0 1 1 1 
                );

left_condns = ((sen[0] == 1 && sen[1] == 1 && sen[2] == 1 && sen[3] == 1 && sen[4] == 1 && sen[5] == 1 && sen[6] == 0) ||      //1 1 1 1 1 1 0  
                  (sen[0] == 1 && sen[1] == 1 && sen[2] == 1 && sen[3] == 1 && sen[4] == 1 && sen[5] == 0 && sen[6] == 0) ||      //1 1 1 1 1 0 0 
                  (sen[0] == 1 && sen[1] == 1 && sen[2] == 1 && sen[3] == 1 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0) ||      //1 1 1 1 0 0 0 
                  (sen[0] == 1 && sen[1] == 1 && sen[2] == 1 && sen[3] == 0 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0)         //1 1 1 0 0 0 0 
               );
counter_left_condns = (((sen[0] == 1 && sen[1] == 1 && sen[2] == 1 && sen[3] == 1 && sen[4] == 1 && sen[5] == 1 && sen[6] == 0) ||      //1 1 1 1 1 1 0  
                      (sen[0] == 1 && sen[1] == 1 && sen[2] == 1 && sen[3] == 1 && sen[4] == 1 && sen[5] == 0 && sen[6] == 0) ||      //1 1 1 1 1 0 0 
                      (sen[0] == 1 && sen[1] == 1 && sen[2] == 1 && sen[3] == 1 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0)       //1 1 1 1 0 0 0 
                      ));
counter_right_condns = ((sen[0] == 0 && sen[1] == 1 && sen[2] == 1 && sen[3] == 1 && sen[4] == 1 && sen[5] == 1 && sen[6] == 1) ||       //0 1 1 1 1 1 1  
                  (sen[0] == 0 && sen[1] == 0 && sen[2] == 1 && sen[3] == 1 && sen[4] == 1 && sen[5] == 1 && sen[6] == 1) ||      //0 0 1 1 1 1 1  
                  (sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 1 && sen[4] == 1 && sen[5] == 1 && sen[6] == 1)        //0 0 0 1 1 1 1  
                );
node_condns = (sen[0] == 1 && sen[1] == 1 && sen[2] == 1 && sen[3] == 1 && sen[4] == 1 && sen[5] == 1 && sen[6] == 1         //1 1 1 1 1 1 1
                );

uturn_condns = (sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 0 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0       //1 1 1 1 1 1 1 
                );
fwd_condns = ((sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 1 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0) ||      //0 0 0 1 0 0 0 
              (sen[0] == 0 && sen[1] == 0 && sen[2] == 1 && sen[3] == 1 && sen[4] == 1 && sen[5] == 0 && sen[6] == 0) ||      //0 0 1 1 1 0 0 
              (sen[0] == 0 && sen[1] == 0 && sen[2] == 1 && sen[3] == 1 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0) ||      //0 0 1 1 0 0 0
              (sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 1 && sen[4] == 1 && sen[5] == 0 && sen[6] == 0));

spl_node = ((sen[0] == 1 && sen[1] == 1 && sen[2] == 0 && sen[3] == 0 && sen[4] == 0 && sen[5] == 1 && sen[6] == 1) ||       //1 1 0 0 0 1 1
            (sen[0] == 1 && sen[1] == 1 && sen[2] == 1 && sen[3] == 0 && sen[4] == 0 && sen[5] == 1 && sen[6] == 1) ||          //1 1 1 0 0 1 1
            (sen[0] == 1 && sen[1] == 1 && sen[2] == 0 && sen[3] == 0 && sen[4] == 1 && sen[5] == 1 && sen[6] == 1)          //1 1 0 0 1 1 1
           );
y_condns = ((sen[0] == 0 && sen[1] == 1 && sen[2] == 1 && sen[3] == 1 && sen[4] == 1 && sen[5] == 1 && sen[6] == 0)        //0 1 1 1 1 1 0
            );  
 
}



