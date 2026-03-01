#include <Servo.h>
Servo servo1; 
Servo servo2;
Servo servo3;
int i = 0;
const int sprikler = 13;
const int seeding = 4;
#define in1 = 12
#define in2 = 11
#define in3 = 10
#define in4 = 9

void setup() {
  Serial.begin(9600);
  servo1.attach(4);
  servo2.attach(7); 
  servo3.attach(8); 
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(3, OUTPUT);
  digitalWrite(3,HIGH);
  digitalWrite(13,HIGH);
  servo1.write(90); 
    delay(1000);
  servo1.write(0); 
  delay(1000);
  servo2.write(25); 
  servo3.write(0);  
}

void loop() { 


    // BLUETOOTH 
  if (Serial.available() > 0) {
    char inputvalue = char(Serial.read());
    Serial.println(inputvalue);
    
    if (inputvalue == 'F') {
          
      servo1.write(0); 
      delay(10);
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(9, LOW);
      delay(10);
      servo1.write(15); 
    }
    // delay(25); 
  //servo1.write(0); 
  
    else if (inputvalue == 'B') {
      // delay(5); 
     servo1.write(0); 
      // delay(5); 
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(9, HIGH);
      // delay(5); 
      //     
      // delay(5); 
    }
     servo1.write(90); 
     if (inputvalue == 'R') {
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(9, LOW);
    }

    else if (inputvalue == 'L') {
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, HIGH);
    }

    else if (inputvalue == 'G') {
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(9, LOW);
    }

    else if (inputvalue == 'I') {
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, HIGH);
    }

    else if (inputvalue == 'S') {
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
    }
    //SPRINKLER
    else if (inputvalue == 'W') {
     digitalWrite(sprikler,LOW);
     delay(1000);

    }
    else if (inputvalue == 'w') {
     digitalWrite(sprikler,HIGH);
     delay(1000);

    }
    //soil moisture 
    else if (inputvalue == 'U') {
      delay(1000);
      servo2.write(5);  
      delay(1000);
     
    }
    else if (inputvalue == 'u') {
      delay(1000);
      servo2.write(25);  
      delay(1000);
    }
    //SEED
     else if (inputvalue == 'V') {
      delay(1000);
     digitalWrite(3,LOW);
     delay(1000);
    for (i = 0; i < 30; i++) {   
    servo3.write(i);
    delay(10);                      

  }

  
    }
     else if (inputvalue == 'v') {
      delay(1000);
    digitalWrite(3,HIGH);
    delay(1000);
    for (i = 30; i > 0; i--) { 
    servo3.write(i);          
    delay(10);                      

  }
    
    }
   
  }
}
