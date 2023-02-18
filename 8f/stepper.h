#include "led.h"

class Stepper{
	
	public:
		
		void StepLeft();
		void StepRight();
		void SetLed(Led*);
	private:
		Led *pMyLed;
		unsigned char LedCtr;
		void Step(enum Step);
};
