

//  First prototype code, seemed to flash the LED but not sure if it suited the requirements of the Assignment
//  Second revision is more efficient and works better
//  The second revision also includes the second LED, Signal B which was not included in this prototype


int led1 = 6;                                                                         // Sets up LED1, pin 21
int led2 = 7;                                                                         // Sets up LED2, pin 15
int switch1 = 5;                                                                      // Sets up SWITCH1, pin 22
int switch2 = 4;                                                                      // Sets up SWITCH2, pin 23
 
int a =400;                                                                           // This is the wavelength as determined by the brief, having this value assigned to an int avoids "magic numbers" and allows for quick editing here instead of in the later code
int b =6000;                                                                          // This is the wavelength as determined by the brief, having this value assigned to an int avoids "magic numbers" and allows for quick editing here instead of in the later code
int c =7;                                                                            // This is the wavelength as determined by the brief, having this value assigned to an int avoids "magic numbers" and allows for quick editing here instead of in the later code
int d =6500;                                                                          // This is the wavelength as determined by the brief, having this value assigned to an int avoids "magic numbers" and allows for quick editing here instead of in the later code



void setup() {                                                                        // This is the code setup, where parameters are defined etc.
             
    pinMode(switch1, INPUT);                                                          // This defines the pinmode, in this case pin 22, which is switch 1, is defined as an INPUT PIN
    pinMode(switch2, INPUT);                                                          // This defines the pinmode, in this case pin 23, which is switch 2, is defined as an INPUT PIN
    pinMode(led1, OUTPUT);                                                            // This defines the pinmode, in this case pin 21, which is LED1 is defined as an INPUT PIN
    pinMode(led2, OUTPUT);                                                            // This defines the pinmode, in this case pin 15, which is LED2 is defined as an INPUT PIN
}


void loop() {                                                                         // This is the main section of code, this loops forever unless stopped
    if (switch1 == 0){                                                                // If switch1 is LOW (active LOW), then following is true
      if (switch2 == 1){                                                              // If switch2 is LOW (active HIGH), then following is true
        c = 7;                                                                       // C is equal to 17, this is normal mode
  }         
    else{                                                                             // This else loop refers to swtich2 being HIGH, this means the modified waveform is produced instead of the normal one                   
      c = 4;                                                                         // As defined by the brief, 14 pulses are generated since 17-3 = 14
  }
 
    for(int i = 0; i<c; i++){                                                        // This allows us to increment c, which is what allows us to flash the LED X times. i is initialised as 0, and is incremented by 1 every time. 
                                                                                      // However, instead of using i<=c, i<c should be used instead. This is because there will be 18 repetitions instead of 17, or i should be initialised as 1 instead of 0
     
     digitalWrite(led1, HIGH);                                                        // This writes a value to a digital pin, in this case it turns led 1 ON 
     delay(a);                                                                        // This delay determines how long the LED stays on before turning off
     digitalWrite(led1, LOW);                                                         // This writes a value to a digital pin, in this case it turns led 1 OFF
     delay(b);                                                                        // This delay is the time between pulses
     a = a + 50;                                                                      // This adds 50 micro seconds onto the duration that the led stays on                                                      
 }
     delay(d);                                                                        // This delay determines how long in between cycles
}

}
