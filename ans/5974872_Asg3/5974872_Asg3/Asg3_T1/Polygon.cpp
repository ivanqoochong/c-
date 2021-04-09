#include<iostream>
#include "Polygon.h"

using namespace std;

Polygon::Polygon(string name, int sides) {
	this->name = name;
	this->sides = sides;
	sideLengths = new int[sides];
}

Polygon::~Polygon() {
	delete[] sideLengths;
}

string Polygon::getName() const {
	return name;
}

int Polygon::getSides() const {
	return sides;
}

int *Polygon::getSideLengths() const {
	return sideLengths;
}

void Polygon::setSideLengths(int* sideLens) {
	for (int i = 0; i < sides; ++i) {
		sideLengths[i] = sideLens[i];
	}
}

int Polygon::perimeter() {
	int result = 0;
	for (int i = 0; i < sides; ++i) {
		result += sideLengths[i];
	}
	return result;
}

void Polygon::printSideLength() {
	for (int i = 0; i < sides; ++i) {
		cout << sideLengths[i] << " ";
	}
	cout << endl;
}

int Polygon::totalsideLength() {
	int result = 0;
	for (int i = 0; i < sides; ++i) {
		result += sideLengths[i];
	}
	return result;
}

float Polygon::area() {
	return 0;
}