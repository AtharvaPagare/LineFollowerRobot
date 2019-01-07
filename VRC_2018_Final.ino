#include <LiquidCrystal.h>

// Connect to PWM pins 5,6,7,8 are just for now
  int LMF = 7;
  int LMB = 6;
  int RMF = 4;
  int RMB = 5;


// Speed variables 
  int high_speed = 255;
  int zero_speed = 0;
  int med_speed = 128;
  int inter_speed = 200;
  
// Counter-flag variables
  int counter = 0;
  int count_disp = 13;
  int flag = 1;
  bool hogaya = 0;
  int z = 0;


//Switch Variables:
int sw0 = 22, sw1 = 24, sw2 = 26, sw3 = 28, sw4 = 30, swm;
int s0 = digitalRead(sw0);
int s1 = digitalRead(sw1);
int s2 = digitalRead(sw2);
int s3 = digitalRead(sw3);
// Array of Switches, Sensors:
  int sw[6] = {sw0, sw1, sw2, sw3, sw4, swm};
  int threshold[7] = {700, 700, 700, 700, 700, 700, 700};    //Threshold of each sensor
  int seninput[7] = {0, 0, 0, 0, 0, 0, 0};     // Analog Input From Sensors
  int sen_min[7] = {900,900,900,900,900,900,900};
  int sen_max[7] = {100,100,100,100,100,100,100};
  int sen[7] = {0, 0, 0, 0, 0, 0, 0};         // Digital Form of Sensors

//Bools for Fwd, Right, and Left Condns:
 bool forward_condns, right_condns, left_condns, node_condns, uturn_condns, inch_condns, fwd_condns, spl_node, counter_right_condns, counter_left_condns, y_condns;

//Maze variables
int n = -1;   //index of the path mem array
int last_index;
int array_length_of_dry_run = 0;
int array_length_of_corrected_maze = 0;  //Length ofarray that we get by condensing the uncorrected array. 
int h = 0;
int f; 
int path_action_array[15] = {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
int fwd_delay = 300; 
int halt_delay = 500;
bool is_path = 1;
int first_part_of_sharp_turn = 400;
int double_fwd_delay = 500;
int special_condn_first_part_of_sharp_turn = 1000;
// Setup LCD
LiquidCrystal lcd(2,3 ,8,9,10,11);
//UltraSonicDistanceSensor distanceSensor(50, 51);

// PID Variables:
  float leftMotorSpeed = 0;
  float rightMotorSpeed = 0;
  float error = 0;
  float last_error = 0;
  float final_error = 0;
  float motorSpeed = 0;
  //float rightBaseSpeed = 1000;
  //float leftBaseSpeed = 1000;
  int rightMaxSpeed = 255;
  int leftMaxSpeed = 255;
  //float multiplying_factor = 0.128;
  int Kp = 30;
  int Kd = 0;
  int Ki = 0;
  float err;
  int count = 0;
  int p,d,i;
  int p_error = 0;
  int i_error = 0;
  int d_error = 0;
  int integral = 0;
  int derivative = 0;
void setup() {

  // Initiaized Motor pins as Output
    pinMode(count_disp, OUTPUT);
    pinMode(LMF,OUTPUT);
    pinMode(RMF,OUTPUT);
    pinMode(LMB,OUTPUT);
    pinMode(RMB,OUTPUT);

  //Initialized Sensors as Inputs:4
    pinMode(A6, INPUT);
    pinMode(A7, INPUT);
    pinMode(A8, INPUT);
    pinMode(A9, INPUT);
    pinMode(A10, INPUT);
    pinMode(A11, INPUT);
    pinMode(A12, INPUT);
    pinMode(A13, INPUT);
    pinMode(A14, INPUT);
        


  //Initialize Switches as inputs:
    pinMode(sw0, INPUT);
    pinMode(sw1, INPUT);
    pinMode(sw2, INPUT);
    pinMode(sw3, INPUT);
    pinMode(sw4, INPUT);
    pinMode(22, INPUT);    
  //Setup serial
    Serial.begin(9600);   
     lcd.print("Hello World"); 
     //calibrate();    
}

void loop() {
if(s0 == HIGH && s1 == LOW && s2 == LOW && s3 == LOW){
    track1();
  }
  else if(s0 == LOW && s1 == HIGH && s2 == LOW && s3 == LOW){
    track2();
  }
  else if(s0 == LOW && s1 == LOW && s2 == HIGH && s3 == LOW){
    track3();
  }
  else if(s0 == HIGH && s1 == LOW && s2 == LOW && s3 == HIGH){
    mirror_track1();
  }  
  else if(s0 == LOW && s1 == HIGH && s2 == LOW && s3 == HIGH){
    mirror_track2();
  }
  else if(s0 == LOW && s1 == LOW && s2 == HIGH && s3 == HIGH){
    mirror_track3();
  }    
    
   
}

