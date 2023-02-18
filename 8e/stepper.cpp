#include "stepper.h"

enum Step{LEFT,RIGHT};

void Stepper::SetLed(Led *pLed){

		pMyLed = pLed;
	

}

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		LedCtr--;
		LedCtr = LedCtr % 4;
		pMyLed -> On(LedCtr);
		
			
	}
	else if(eStep == RIGHT){
		LedCtr++;
		LedCtr = LedCtr % 4;
		pMyLed -> On(LedCtr);
	}
}

void Stepper::StepLeft(){
	Step(LEFT);
}

void Stepper::StepRight(){
	Step(RIGHT);
}
