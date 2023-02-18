#include "led.h"

Led MyLed;

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12040 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	MyLed.Init();

	while(1){
		Delay(100);
		MyLed.StepLeft();
	}
}

