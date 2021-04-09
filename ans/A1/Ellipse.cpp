#include <iostream>
#include <fstream>
#include "Ellipse.h"

double Ellipse::area() {
    return 3.1415926 * major_axis * minor_axis;
}
