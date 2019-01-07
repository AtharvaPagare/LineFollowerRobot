//Assuming 7 sensors in the program
int pid_error_calc(){
  sensor_read();
  if(sen[0] == 0 && sen[1] == 0 && sen[2] == 1 && sen[3] == 1 && sen[4] == 1 && sen[5] == 0 && sen[6] == 0){
    error = 0;
  }
  if(sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 1 && sen[4] == 1 && sen[5] == 0 && sen[6] == 0){
    error = 1;
  }
  if(sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 0 && sen[4] == 1 && sen[5] == 0 && sen[6] == 0){
    error = 2;
  }
  if(sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 0 && sen[4] == 1 && sen[5] == 1 && sen[6] == 0){
    error = 3;
  }
  if(sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 0 && sen[4] == 0 && sen[5] == 1 && sen[6] == 0){
    error = 4;
  }
  if(sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 0 && sen[4] == 0 && sen[5] == 1 && sen[6] == 1){
    error = 5;
  }
  if(sen[0] == 0 && sen[1] == 0 && sen[2] == 0 && sen[3] == 0 && sen[4] == 0 && sen[5] == 0 && sen[6] == 1){
    error = 6;
  }
  if(sen[0] == 0 && sen[1] == 0 && sen[2] == 1 && sen[3] == 1 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0){
    error = -1;
  }
  if(sen[0] == 0 && sen[1] == 0 && sen[2] == 1 && sen[3] == 0 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0){
    error = -2;
  }
  if(sen[0] == 0 && sen[1] == 1 && sen[2] == 1 && sen[3] == 0 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0){
    error = -3;
  }
  if(sen[0] == 0 && sen[1] == 1 && sen[2] == 0 && sen[3] == 0 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0){
    error = -4;
  }
  if(sen[0] == 1 && sen[1] == 1 && sen[2] == 0 && sen[3] == 1 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0){
    error = -5;
  }
  if(sen[0] == 1 && sen[1] == 0 && sen[2] == 0 && sen[3] == 0 && sen[4] == 0 && sen[5] == 0 && sen[6] == 0){
    error = -6;
  }
  return error;
}

