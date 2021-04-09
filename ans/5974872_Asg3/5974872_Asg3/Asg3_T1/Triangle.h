#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Polygon.h"
#include<cmath>
class Triangle : public Polygon {
private:

public:
	Triangle(int a, int b, int c);
	virtual float area();
};
#endif // !TRIANGLE_H