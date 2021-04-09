#ifndef ELLIPSE_H
#define ELLIPSE_H

struct Ellipse {
public:
    double x;
    double y;
    double major_axis;
    double minor_axis;
    double area();
};

#endif // !ELLIPSE_H
