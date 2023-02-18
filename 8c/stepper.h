#include "ledinv.h"

class Stepper{
	
	public:
		Led MyLed;
		LedInv MyLedInv;
		void StepLeft();
		void StepRight();
	private:
		unsigned char LedCtr;
		void Step(enum Step);
};
