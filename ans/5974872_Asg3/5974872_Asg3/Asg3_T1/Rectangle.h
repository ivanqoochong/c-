#ifndef RECTANGLE_H
#define RECTANGLE_H
#include"Drawable.h"
#include"Polygon.h"

class Rectangle :public Polygon,public Drawable {
private:
	int width;
	int height;
public:
	Rectangle(int w, int h);
	virtual float area();
	int getWidth() const;
	int getHeight() const;
};


#endif // !RECTANGLE_H


