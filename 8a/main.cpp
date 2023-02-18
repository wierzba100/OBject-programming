#include "stepper.h"
#include "keyboard.h"
#include <stdio.h>


Stepper MyStepper;
Keyboard MyKeyboard;

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12040 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{

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
