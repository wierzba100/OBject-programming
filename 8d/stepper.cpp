#include "stepper.h"

enum Step{LEFT,RIGHT};

void Stepper::SetMode(unsigned char ucInversionSet){

	ucInversion = ucInversionSet;
}

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		LedCtr--;
		LedCtr = LedCtr % 4;
		if(ucInversion == 0){
			MyLed.On(LedCtr);
		}
		else{
			MyLedInv.On(LedCtr);
		}
			
	}
	else if(eStep == RIGHT){
		LedCtr++;
		LedCtr = LedCtr % 4;
		if(ucInversion == 0){
			MyLed.On(LedCtr);
		}
		else{
			MyLedInv.On(LedCtr);
		}
	}
}

void Stepper::StepLeft(){
	Step(LEFT);
}

void Stepper::StepRight(){
	Step(RIGHT);
}
