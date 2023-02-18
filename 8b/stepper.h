#include "led.h"

class Stepper{
	
	public:
		Led MyLed;
		void StepLeft();
		void StepRight();
	private:
		unsigned char LedCtr;
		void Step(enum Step);
};
