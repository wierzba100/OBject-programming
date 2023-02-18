#include "stepper.h"
#include <stdio.h>


Stepper MyStepper;

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12040 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	
	while(1){
		Delay(250);
		MyStepper.StepLeft();
	}
}

