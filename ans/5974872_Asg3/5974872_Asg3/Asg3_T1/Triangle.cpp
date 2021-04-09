#include "Triangle.h"
#include <cmath>

Triangle::Triangle(int a, int b, int c) : Polygon("triangle", 3) {
	int sideLen[3] = { a,b,c };
	setSideLengths(sideLen);
}

float Triangle::area() {
	int a = sideLengths[0];
	int b = sideLengths[1];
	int c = sideLengths[2];
	float s = (a + b + c) / 2;
	float r = sqrt(s * (s - a) * (s - b) * (s - c));
	return r;
}
