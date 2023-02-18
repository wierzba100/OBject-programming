#include "stepper.h"

enum Step{LEFT,RIGHT};

extern unsigned char ucInversion;

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		LedCtr--;	
	}
	else if(eStep == RIGHT){
		LedCtr++;
	}
		
		LedCtr = LedCtr % 4;
	
	if(ucInversion == 0){
			MyLed.On(LedCtr);
		}
		else{
			MyLedInv.On(LedCtr);
		}
			
	

}


void Stepper::StepLeft(){
	Step(LEFT);
}

void Stepper::StepRight(){
	Step(RIGHT);
}
