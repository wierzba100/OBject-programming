#include "ledinv.h"

class Stepper{
	
	
		
	public:
		void StepLeft();
		void StepRight();
		void SetMode(unsigned char);
	private:
		Led MyLed;
		LedInv MyLedInv;
		unsigned char ucInversion;
		unsigned char LedCtr;
		void Step(enum Step);
};
