/*
 * Vec.h
 *
 *  Created on: Feb 9, 2018
 *      Author: shmkane
 */


#ifndef VEC_H_
#define VEC_H_
#include <math.h>

class Vec {
private:
	double x, y, z;
public:
	//static int total;

	Vec(double xcoord, double ycoord, double zcoord);

	std::tuple<double xc, double yc, double zc> getPos(){

	}

	double getX(){return x;}
	double getY(){return x;}
	double getZ(){return x;}

	void setX(double xpos){ x = xpos; }
	void setY(double ypos){ x = ypos; }
	void setZ(double zpos){ x = zpos; }

	//int getTotalTags() { return total; }

	double getDistance() {
		return sqrt(x*x + y*y + z*z);
	}
};

#endif
