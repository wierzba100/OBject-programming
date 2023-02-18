#include "stepper.h"


enum Step{LEFT,RIGHT};

Stepper::Stepper(unsigned char StartingValue){
	On(StartingValue);
	LedCtr = StartingValue;
}

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		LedCtr--;
		LedCtr = LedCtr % 4;
		On(LedCtr);
	}
	else if(eStep == RIGHT){
		LedCtr++;
		LedCtr = LedCtr % 4;
		On(LedCtr);
	}else{
	}
}

void Stepper::StepLeft(){
	Step(LEFT);
}

void Stepper::StepRight(){
	Step(RIGHT);
}
