#ifndef POLYGON_H
#define POLYGON_H
#include<string>
using std::string;

class Polygon
{
public:
	Polygon(string name, int sides);
	~Polygon();
	string getName() const;
	int getSides() const;
	int* getSideLengths() const;
	void setSideLengths(int* sideLens);
	int perimeter();
	void printSideLength();
	int totalsideLength();
	virtual float area() = 0;
	

private:
	string name;
	int sides;
	

protected:
	int* sideLengths;
};


#endif // !POLYGON_H

