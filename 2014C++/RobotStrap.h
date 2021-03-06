#ifndef ROBOT_STRAP
#define ROBOT_STRAP

#include <stdio.h>

/**
 * This is the base class
 */ 
class RobotStrap : public SimpleRobot
{
	private:
	
	RobotDrive myRobot; // robot drive system
	Joystick stick; // only joystick

	public:
		
		/* Constructor */
		RobotStrap();
		~RobotStrap();
		
		/* Mode member functions */
		void Test( void );
		void Autonomous( void );
		void OperatorControl( void );
		
		/* Helper member functions */
		void printStatus( void );

};

#endif /* ROBOT_STRAP */
