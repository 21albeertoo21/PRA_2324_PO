#include "program.h"
#include <iostream>

using namespace std;

	BrazoRobotico::BrazoRobotico(double x, double y, double z, bool holding){
			this->x = x;
			this->y = y;
			this->z = z;
			this->holding = holding;
		}
	double BrazoRobotico::checkX(){
			return x;
		}
	double BrazoRobotico::checkY(){
                        return y;
                }
	double BrazoRobotico::checkZ(){
                        return z;
                }
	bool BrazoRobotico::checkHold(){
			return holding;
		}
	void BrazoRobotico::coger(){
			holding = true;
			cout << "Objeto cogido" << endl;
		}
	void BrazoRobotico::soltar(){
			holding = false;
			cout << "Objeto soltado" << endl;
		}
	void BrazoRobotico::mover(double new_x, double new_y, double new_z){
		       new_x = x;
	       		new_y = y;
	 		new_z = z;
			cout << "El robot se ha movido a las siguientes coordenaas (" << new_x << " ," << new_y << " ," << new_z << ")" << endl; 
		}
	
