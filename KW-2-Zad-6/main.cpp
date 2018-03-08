#include <iostream>
#include <cmath>
#include "triangle.h"

using namespace std;

/*float distance(Point p1,Point p2)
		{
			float xP = pow((p2.getX()-p1.getX()),2.0);
			float yP = pow((p2.getY()-p1.getY()),2.0);
			return sqrt(xP + yP);
		}*/

int main(int argc, char** argv) {
	
	Triangle t1(Point(1.0,2.0),Point(2.0,3.0),Point(4.0,4.0));
	cout<<t1.perimeter() << " " << t1.area()<< endl;
	return 0;
}

// nie dzia³a w Dev C++ dlaczego???
