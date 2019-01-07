//Track1Actions madhye right, left invert kar nantar.
void mirrorTrack1Actions(){
  if(counter == 1){
    turnRight();
    //hogaya = 0;
  }
  else if(counter == 2){
    turnLeft();
    //hogaya = 0;
  }
  else if(counter == 3){
    forward();
    //hogaya = 0;
  }
  else if(counter == 4){
    turnRight();
    //hogaya = 0;
  }
  else if(counter == 5){
    forward();
    //hogaya = 0;
  }
  else if(counter == 6){
    turnRight();
    //hogaya = 0;
  }
  else if(counter == 7){
    forward();
    //hogaya = 0;
  }
  else if(counter == 8){
    turnLeft();
    //hogaya = 0;
  }
  else if(counter == 9){
    turnRight();
    //hogaya = 0;
  }
  else if(counter == 10){
    forward();
    //hogaya = 0;
  }
  else if(counter == 11){
    turnRight();
    //hogaya = 0;
  }
  else if(counter == 12){
    turnLeft();
    //hogaya = 0;
  }
  else if(counter == 13){
    forward();
    //hogaya = 0;
  }
  else if(counter == 14){
    turnLeft();
    //hogaya = 0;
  }
  else if(counter == 15){
    turnRight();
    forward();
    delay(200);
    halt();
  }  
}

void mirrortrack2Actions(){
  if(counter == 1){
    turnRight();
    //hogaya = 0;
  }
  else if(counter == 2){
    forward();
    hogaya = 0;
  }
  else if(counter == 3){
    forward();
    hogaya = 1;
  }
  else if(counter == 4){
    turnLeft();
    hogaya = 1;
  }
  else if(counter == 5){
    turnRight();
    hogaya = 1;
  }
  else if(counter == 6){
    forward();
    hogaya = 1;
  }
  else if(counter == 7){
    turnRight();
    hogaya = 1;  
  } 
  else if(counter == 8){
    turnLeft();
    hogaya = 1;
  }
  else if(counter == 9){
    turnRight();
    hogaya = 1;
  }
  else if(counter == 10){
    forward();
    hogaya = 1;
  }
  else if(counter == 11){
    turnRight();
    hogaya = 1;
  }     
  else if(counter == 12){
    forward();
    hogaya = 1;
  }
  else if(counter == 13){
      forward();
      delay(600); //Need to check this line.
      halt();
  }   
  else{
    lineFollower();    
  }
}
 void track3Actions(){
  if(counter == 1){
    turnLeft();
  }
  else if(counter == 2){
    forward();
  }
  else if(counter == 3){
    turnLeft();
  }
  else if(counter == 4){
    turnRight();
  }
  else if(counter == 5){
    forward();
  }
  else if(counter == 6){
    turnLeft();
  }
  else if(counter == 7){
    forward();
  }
  else if(counter == 8){     //Check these 2 counters according to the track.
    turnRight();
  }
  else if(counter == 9){
    forward();
  }
  else if(counter == 10){
    forward();
  }
  else if(counter == 11){
    turnRight();
  }
  else if(counter == 12){
    turnLeft();
  }
  else if(counter == 13){
    turnLeft();
  }
  else if(counter == 14){
    turnRight();
  }
  else if(counter == 15){
    turnRight();
  }
  else if(counter == 16){
    turnRight();
  }
  else if(counter == 17){
    turnRight();
  }
  else if(counter == 19){
    turnLeft();
  }
  else if(counter == 20){
    turnRight();
  }
  if(counter == 21){
    turnLeft();
    forward();
    delay(100); //This needs to be tested.
    halt();  
  }
 }


