#include "led.h"


class Stepper{
	
	public:
		void StepLeft();
		void StepRight();
	private:
		unsigned char LedCtr;
		void Step(enum Step);
};
