//
//  main.cpp
//  CSCI251 - Assignment 1 - T4
//
//  Created by Yik Hin Garret Lai on 13/1/2021.
//

#include <iostream>
#include <fstream>
#include "Rectangle.h"
#include "Ellipse.h"



int main() {
    Rectangle r;
    r.width = 10;
    r.height = 15;
    r.x = 3;
    r.y = 2;

    cout << "Area of the rectangle: " << r.area() << endl;

    Ellipse e;
    e.major_axis = 3;
    e.minor_axis = 5;
    e.x = 14;
    e.y = 68;

    cout << "Area of the ellipse: " << e.area() << endl;

    return 0;
}
