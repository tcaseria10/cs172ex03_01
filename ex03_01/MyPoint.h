#ifndef MYPOINT_H_ 
#define MYPOINT_H_

class MyPoint {
private: 	
	double x;
	double y;

public:

	MyPoint();
	MyPoint(double xcoordinate, double ycoordinate);
	double getxcoordinate();
	double getycoordinate();
	double getdistance(double xvalue, double yvalue);
};
#endif

#pragma once
