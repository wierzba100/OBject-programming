#include "stepper.h"


enum Step{LEFT,RIGHT};

extern Led MyLed;

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		LedCtr--;
	}
	else if(eStep == RIGHT){
		LedCtr++;
	}
	else{}
		LedCtr = LedCtr % 4;
		MyLed.On(LedCtr);

}

void Stepper::StepLeft(){
	Step(LEFT);
}

void Stepper::StepRight(){
	Step(RIGHT);
}
