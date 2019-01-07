/*
 Consideing the speed of the motor to vary from 220 to 20
 hence, Kp will be:
 Kp = 220 - 40/6 - 0 = 33
 Intially, base speed will be 200
 Ziegler–Nichols method giving K' values
(loop times considered to be constant and equal to dT)
Control Type  Kp  Ki'   Kd'
P   0.50Kc  0   0
PI  0.45Kc  1.2KpdT/ Pc   0
PD  0.80Kc  0   KpPc /(8dT)
PID   0.60Kc  2KpdT / Pc  KpPc / (8dT)

 */
float new_PID(){
  int error = pid_error_calc();
  p_error = Kp * error;
  integral += error;
  i_error = Ki * error;
  derivative = error - last_error;
  d_error = Kd * derivative;
  final_error = (p_error) + (i_error) + (d_error);
  last_error = error; 
  return final_error;
}

void motor_speed_update(float motorBaseSpeed){
final_error = new_PID();
leftMotorSpeed = motorBaseSpeed - final_error;
rightMotorSpeed = motorBaseSpeed + final_error;
 /* if (rightMotorSpeed > rightMaxSpeed && leftMotorSpeed > leftMaxSpeed){
    rightMotorSpeed = rightMaxSpeed;
    leftMotorSpeed = leftMaxSpeed;// prevent the motor from going beyond max speed
    analogWrite(LMF,leftMotorSpeed);
    analogWrite(RMF,rightMotorSpeed);
    analogWrite(LMB,zero_speed);
    analogWrite(RMB,zero_speed);
  }
  else if (rightMotorSpeed > rightMaxSpeed && leftMotorSpeed < 0){
    rightMotorSpeed = rightMaxSpeed;
    leftMotorSpeed = -1*leftMotorSpeed;
    analogWrite(LMF,zero_speed);
    analogWrite(RMF,rightMotorSpeed);
    analogWrite(LMB,leftMotorSpeed);
    analogWrite(RMB,zero_speed);
  }
  else if (rightMotorSpeed < 0 && leftMotorSpeed > leftMaxSpeed){
    leftMotorSpeed = leftMaxSpeed;
    rightMotorSpeed = -1*rightMotorSpeed;
    analogWrite(LMF,leftMotorSpeed);
    analogWrite(RMF,zero_speed);
    analogWrite(LMB,zero_speed);
    analogWrite(RMB,rightMotorSpeed);
  }
  else if (rightMotorSpeed < 0 && leftMotorSpeed < 0){
    leftMotorSpeed = -1*leftMotorSpeed;
    rightMotorSpeed = -1*rightMotorSpeed;
    analogWrite(LMF,zero_speed);
    analogWrite(RMF,zero_speed);
    analogWrite(LMB,leftMotorSpeed);
    analogWrite(RMB,rightMotorSpeed);
  }
  else{
    analogWrite(LMF,leftMotorSpeed);
    analogWrite(RMF,rightMotorSpeed);
    analogWrite(LMB,zero_speed);
    analogWrite(RMB,zero_speed);
  }
  */
  if (rightMotorSpeed > rightMaxSpeed ) rightMotorSpeed = rightMaxSpeed; // prevent the motor from going beyond max speed
        if (leftMotorSpeed > leftMaxSpeed ) leftMotorSpeed = leftMaxSpeed; // prevent the motor from going beyond max speed
        if (rightMotorSpeed < 0) rightMotorSpeed = 0; // keep the motor speed positive
        if (leftMotorSpeed < 0) leftMotorSpeed = 0; // keep the motor speed positive
        Serial.print(error);
        Serial.print("\t");
        Serial.print(last_error);
        Serial.print("\t");
        Serial.print(rightMotorSpeed);
        Serial.print("\t");
        Serial.print(leftMotorSpeed);
        Serial.println("\t");
        delay(50);
}

