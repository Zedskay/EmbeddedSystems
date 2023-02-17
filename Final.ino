
// Final Version of Code

const int switch1 = 5;                                                        // Constant int, means int wont changed (pin is assigned and cannot be changed. Switch 1, pin 5
const int switch2 = 4;                                                        // Switch 2, pin 4
const int led1  = 6;                                                          // LED1, pin 6. This is Signal B
const int led2 = 7;                                                           // LED2, pin7. This is Signal A

int a = 400;                                                                  // value of a, as determined by brief
int b = 600;                                                                  // value of b, as determined by brief
int c = 17;                                                                   // value of c, as determined by brief. Number of flashes
int d = 6500;                                                                 // value of d, as determined by brief


int buttonState1 = 0;                                                         // Sets up the state of the button, this allows us to poll the push buttons. Initialised at 0
int buttonState2 = 0;                                                         // Sets up the state of the button, this allows us to poll the push buttons. Initialised at 0


void setup() {                                                                // Code setup, initialises components

  pinMode(led1, OUTPUT);                                                      // Sets led1 (pin 6), as an output
  pinMode(led2, OUTPUT);                                                      // Sets led2 (pin 7), as an output

  pinMode(switch1, INPUT);                                                    // Sets switch1 (pin 5), as an input
  pinMode(switch2, INPUT);                                                    // Sets switch2 (pin 4), as an input
  
}

void loop() {                                                                // Code loop. Main part of our code, runs forever
  
  buttonState1 = digitalRead(switch1);                                       // ButtonState1 is assigned to the digital pin switch1. This pin is read for a digital value (0 or 1)
  buttonState2 = digitalRead(switch2);                                       // ButtonState2 is assigned to the digital pin switch2. This pin is read for a digital value (0 or 1)
  
   if(buttonState1 == LOW){                                                  // Start of conditional code, if switch 1 is LOW, perform next task (switch 1 is active LOW)
     c =17;                                                                  // Number of flashes in normal mode
    digitalWrite(led1, HIGH);                                                // Digital Write a value to led1, in this case HIGH (Signal B). Turn LED on
    delayMicroseconds(a);                                                    // Delay a
    digitalWrite(led1, LOW);                                                 // Digital Write a value to led1, in this case LOW (Signal B). Turn LED off

    if(buttonState2 == HIGH){                                                // If swtich 2 is HIGH, change operating mode to modified (number of flashes chagnes from 17 to 14)
      c = 14;                                                                // Modifided number of flashes
    }


       
      for(int i = 0; i<c; i++){                                             // for loop, allows us to specify how many times the LED flashes, aka how many pulses. i is incremented, cycle finishes when i = c
        digitalWrite(led2, HIGH);                                           // Digital Write a value to led1, in this case HIGH (Signal A). Turn LED on
        delayMicroseconds(a);                                               // Delay a
        digitalWrite(led2, LOW);                                            // Digital Write a value to led1, in this case LOW (Signal A). Turn LED off
        delayMicroseconds(a);                                               // Delay a
        a = a + 50;                                                         // Delay is increased by 50us every cycle 
         }
    }
   
}

      
      
          
    					
  

      
    

  
  


			
          
        	
  
  

 
  
