#include <iostream>	
#include "MyPoint.h"
using namespace std;

// Tyler Caseria
// CS172
// Hw 03 : Exercise 01
// 23 February 2017

int main() {

	MyPoint point1 (0, 0);
	MyPoint point2 (10, 30.5);
	
	cout << "The first point is (" << point1.getxcoordinate() << ", " << point1.getycoordinate() << ")." << endl;
	cout << "The second point is (" << point2.getxcoordinate() << ", " << point2.getycoordinate() << ")." << endl;
	
	
	point1.getdistance (point2.getxcoordinate(), point2.getycoordinate());

	int one;
	cout << "Press 1, then press enter to exit." << endl;
	cin >> one;

	return 0;
}