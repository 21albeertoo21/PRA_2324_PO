#include <iostream>
#include "program.h"

using namespace std;

int main(){
	
	BrazoRobotico arm;
	arm.BrazoRobotico(12.2, 2.34, 3.33, True);
	arm.mover(14.20, 5.01, 0.21);
	arm.coger();
}
