//
//  main.cpp
//  CSCI251 - Assignment 1 - T1
//
//  Created by Yik Hin Garret Lai on 13/1/2021.
//

#include <iostream>
using namespace std;

struct Coordinate {
    int x, y;
    Coordinate(int x, int y) {
        this->x = x;
        this->y = y;
    }
};

int main(int argc, const char* argv[]) {

    Coordinate p = Coordinate(1, 2);
    Coordinate q = Coordinate(3, 4);

    Coordinate* r = new Coordinate(5, 6);
    Coordinate* s = new Coordinate(7, 8);

    q = p;
    p.x = 10;
    p.y = 20;
    cout << "Coordinate of p is: " << p.x << ", " << p.y << endl;
    cout << "Coordinate of q is: " << q.x << ", " << q.y << endl;
    cout << endl;

    // Problem appears below!
    // The author of this programme wishes pointer s to copy r's x and y values.
    // by executing the statement s=r.  The author has assigned other values to r.
    // However, s' values of x and y are changed accordingly.

    // Task 1A: State the potential problem.
    // In this case, s = r which means they are pointing to the same address but not the value

    // Task 1B: Fix the problem by rewriting the statements.
    // Adding a pointer will resolve this problem. Because they are copying a value not the address only.
    // Also we need to delete s and r to prevent memory leak.

    *s = *r;
    r->x = 50;
    r->y = 60;

    cout << "Coordinate of r is: " << r->x << ", " << r->y << endl;
    cout << "Coordinate of s is: " << s->x << ", " << s->y << endl;
    delete s;
    s = nullptr;
    delete r;
    r = nullptr;
    return 0;
}
