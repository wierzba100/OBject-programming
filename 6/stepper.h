#include "led.h"

class Stepper : Led{
	
	public:
		Stepper(unsigned char = 0);
		void StepLeft();
		void StepRight();
	private:
		unsigned char LedCtr;
		void Step(enum Step);
};
