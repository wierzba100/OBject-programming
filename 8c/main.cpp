#include "stepper.h"
#include "keyboard.h"
#include <stdio.h>


unsigned char ucInversion = 0;

Stepper MyStepper;
Keyboard MyKeyboard;

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12040 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void){
	
	if(MyKeyboard.eRead() == BUTTON_4){
		ucInversion = 1;
	}
	else{
		ucInversion = 0;
	}
	
	
	while(1){
		Delay(250);
		if(MyKeyboard.eRead() == BUTTON_1){
			MyStepper.StepRight();
			}
		else if(MyKeyboard.eRead() == BUTTON_2){
			MyStepper.StepLeft();
			}
	}
}
