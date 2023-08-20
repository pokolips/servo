//https://www.instructables.com/How-to-Control-3-Servo-Motors-using-Push-Button-Sw/
#include  <Servo.h>

Servo myservo;  // create servo object to control a servo 
Servo myservo2; 
Servo myservo3;

int pos = 85;    // variable to store the servo's starting position
int pos2 = 85; 
int pos3 = 85;

const int maxDeg = 175; // limits the maximum range of the servo's movement to 175
const int minDeg = 5;   // limits the minimum range of the servo's movement to 5

const int movement = 2; // distance to move servo

// This basically means the servo will sweep from 5 to 175 (not 0 to 180 as expected), you can adjust this to suit your own servo motors specs



const int leftPin = 2; // tells the Arduino the location of  the signal cable from the switch 
const int rightPin = 3;

const int leftPin2 = 4;
const int rightPin2 = 5;

const int leftPin3 = 6;
const int rightPin3 = 7;

const int outputPin = 8; // tells the Arduino the location of the signal cable to the servo 
const int outputPin2 = 9; 
const int outputPin3 = 10;

int leftPressed = 0; // variables we will use to keep information about the switch states
int rightPressed = 0;

int leftPressed2 = 0;
int rightPressed2 = 0;

int leftPressed3 = 0;
int rightPressed3 = 0;


void setup() 
{ 
myservo.attach(outputPin);  // attaches the servo motor's signal cable location, stored in the variable outputPin, to the servo object 
myservo2.attach(outputPin2);
myservo3.attach(outputPin3);

pinMode(leftPin, INPUT); // sets the state of the pins to input mode
pinMode(rightPin, INPUT);

pinMode(leftPin2, INPUT);
pinMode(rightPin2, INPUT);

pinMode(leftPin3, INPUT);
pinMode(rightPin3, INPUT);
} 

void loop() 
{ 
leftPressed = digitalRead(leftPin); //gives a value to the variables as the state of the switch
rightPressed = digitalRead(rightPin);

leftPressed2 = digitalRead(leftPin2);
rightPressed2 = digitalRead(rightPin2);

leftPressed3 = digitalRead(leftPin3);
rightPressed3 = digitalRead(rightPin3);

// The following routine handles what happens if the first set of push buttons are pressed

 if(leftPressed){
   if(pos < maxDeg) 
     pos += movement;
     myservo.write(pos);             // tells the servo to go to the position stored in the variable ‘pos’ 
      }
      
 if(rightPressed){
   if(pos > minDeg) 
      pos -= movement;
      myservo.write(pos);             // tells the servo to go to the position stored in the variable ‘pos’            
     }                      

// The following routine handles what happens if the second pair of push buttons are pressed

 if(leftPressed2){
   if(pos2 < maxDeg) 
      pos2 += movement;
      myservo2.write(pos2);          
   }                      

 if(rightPressed2){
   if(pos2 > minDeg) 
      pos2 -= movement;
      myservo2.write(pos2);              
      }                     

// The following routine handles what happens if the third pair of push buttons are pressed

 if(leftPressed3){
   if(pos3 < maxDeg) 
      pos3 += movement;
      myservo3.write(pos3);              
      }                     

 if(rightPressed3){
   if(pos3 > minDeg) 
      pos3 -= movement;
      myservo3.write(pos3);               
      }

}

 //if(rightPressed3){
 //  ctrl_servo(myservo3, pos3, -1);  

 //void ctrl_servo(servo, poss, dir){
 //  if(poss > minDeg) 
 //     poss += movement*dir;
 //     servo.write(poss);               
 //     }
 //  else;
 //    delay(15); 
 //  }












