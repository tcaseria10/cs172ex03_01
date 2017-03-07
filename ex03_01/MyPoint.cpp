#include "MyPoint.h"
#include <iostream>
#include <cmath>
using namespace std;


MyPoint::MyPoint(double xcoordinate, double ycoordinate) {
	x = xcoordinate;
	y = ycoordinate;
}

MyPoint::MyPoint() {
	x = 0;
	y = 0;
}


double MyPoint::getxcoordinate() {
	return x;
}

double MyPoint::getycoordinate() {
	return y;
}

double MyPoint::getdistance (double xvalue, double yvalue) {
	double distance = (sqrt(pow((xvalue - x), 2) + pow((yvalue - y), 2)));
	cout << "The distance between the two points is " << distance << endl;
	return distance;
}