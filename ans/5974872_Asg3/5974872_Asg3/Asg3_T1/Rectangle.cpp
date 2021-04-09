#include"Rectangle.h"

Rectangle::Rectangle(int w, int h) : Polygon(w == h ? "square" : "rectengle" , 4){
	width = w;
	height = h;
	int sideLens[4] = { w,h,w,h };
	setSideLengths(sideLens);
}

float Rectangle::area()
{
	return width * height;
}

int Rectangle::getWidth() const {
	return width;
}

int Rectangle::getHeight() const {
	return height;
}