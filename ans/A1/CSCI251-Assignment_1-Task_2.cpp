//
//  main.cpp
//  CSCI251 - Assignment 1 - T2
//
//  Created by Yik Hin Garret Lai on 13/1/2021.
//

#include <iostream>
#include <memory>  // for smart pointer

using namespace std;

struct Coordinate {
    int x, y;
    Coordinate(int x, int y) {
        this->x = x;
        this->y = y;
    }
};

int main(int argc, const char* argv[]) {

    // Question: What is the potential problem of the following programmes?
    // Task 2A: State the problem of the programmes
    //It may cause mamory leak by making the memory deallocation automatic. When we use smart pointer it will delete automactically.

    // Task 2B: Use smart pointer to resolve the problem
    unique_ptr<Coordinate> r(new Coordinate(5, 6));
    unique_ptr<Coordinate> s(new Coordinate(7, 8));

    r->x = 50;
    r->y = 60;

    cout << "Coordinate of r is: " << r->x << ", " << r->y << endl;
    cout << "Coordinate of s is: " << s->x << ", " << s->y << endl;

    return 0;
}
