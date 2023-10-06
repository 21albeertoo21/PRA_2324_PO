#include <iostream>

using namespace std;

class BrazoRobotico{
	private:
		double x, y, z;
		bool holding;
	public:
		BrazoRobotico(double x, double y, double z, bool holding);
		double checkX();
		double checkY();
		double checkZ();
		bool checkHold();
		void coger();
		void soltar();
		void mover(double x, double y, double z);
};





