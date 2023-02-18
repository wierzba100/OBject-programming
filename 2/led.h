
enum LedState {STEP_LEFT, STEP_RIGHT, LED_STOP};

class Led {
	
private:
		unsigned char LedCtr;
		void Step(enum Step);
		void On(unsigned char);
public :
		void Init(void);
		void StepLeft(void);
		void StepRight(void);
		
	
} ;

