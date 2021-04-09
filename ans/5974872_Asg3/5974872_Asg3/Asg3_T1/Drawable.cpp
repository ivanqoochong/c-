#include<iostream>
#include"Drawable.h"

using std::cout;
using std::endl;

void Drawable::draw(int width, int height) {
	for (int i = 0; i < height; i++) {
		cout << "	";
		if (i == 0 || i == height - 1) {
			for (int i = 0; i < width; i++) {
				cout << "*";
			}
			cout << "" << endl;
		}
		else {
			cout << "*";
			for (int i = 0; i < width - 2; i++) {
				cout << " ";
			}
			cout << "*" << endl;;
		}

	}
}