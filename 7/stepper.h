#include "led.h"

class Stepper{
	
	public:
		Led MyLed;
		Stepper(unsigned char = 0);
		void StepLeft();
		void StepRight();
	private:
		unsigned char LedCtr;
		void Step(enum Step);
};
