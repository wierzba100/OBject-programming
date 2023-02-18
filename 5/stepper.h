#include "led.h"

class Stepper : Led{
	
	public:
		void StepLeft();
		void StepRight();
	private:
		unsigned char LedCtr;
		void Step(enum Step);
};
