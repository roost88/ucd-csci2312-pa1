// Programming Assignment 1 - Three Dimensional Triangle

// Author:      Dylan Lang
// Date:        2 Sept 2015

// Three dimensional triangle point class

// include guard
#ifndef POINT_H
#define POINT_H

class Point {

private:
    double x;
    double y;
    double z;

public:
    // Constructors
    Point();                      // default constructor
    Point(double x, double y, double z);    // two-argument constructor

    // Destructor
    ~Point();

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    // Accessor methods
    double getX();
    double getY();
    double getZ();

    // Other member functions
    // Calculates distance between two points
    double distanceTo(Point &p);
};

#endif