// Programming Assignment 1 - Three Dimensional Triangle

// Author:      Dylan Lang
// Date:        2 Sept 2015

// Point class implementation file

#include <cmath>
#include "Point.h"

// Default constructor
// Initializes the point coodinates to (0.0, 0.0, 0.0)
Point::Point()
{
  x = 0.0;
  y = 0.0;
  z = 0.0;
}

// Constructor
// Initializes the point coordinates to (initX, initY, initZ)
Point::Point(double initX, double initY, double initZ)
{
  x = initX;
  y = initY;
  z = initZ;
}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically
Point::~Point() {
  // no-op
}

// Mutator methods
// Change the values of private member variables

void Point::setX(double newX)
{
  x = newX;
}

void Point::setY(double newY)
{
  y = newY;
}

void Point::setZ(double newZ)
{
  z = newZ;
}

// Accessors
// Return the current values of private member variables

double Point::getX()
{
  return x;
}

double Point::getY()
{
  return y;
}

double Point::getZ()
{
  return z;
}

// Other member functions

// Calculates distance between two points
// Uses Pythagorean theorem
double Point::distanceTo(Point &p)
{
  // First point variables
  double x1 = getX();
  double y1 = getY();
  double z1 = getZ();

  // Second point variables
  double x2 = p.getX();
  double y2 = p.getY();
  double z2 = p.getZ();

  // Calculate distance using Pythagorean Theorem
  double distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2) + pow((z1 - z2), 2));

  return distance;
}
