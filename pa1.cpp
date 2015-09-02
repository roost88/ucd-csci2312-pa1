// Programming Assignment 1 - Three Dimensional Triangle

// Author:      Dylan Lang
// Date:        2 Sept 2015

// This program takes x-, y-, and z-coordinates from a user
// and turns them into a triangle. It then calculates the
// distance between each point, and then outputs the area
// of the triangle.

#include <iostream>
#include <iomanip>
#include <cmath>
#include "Point.h"

using namespace std;

// Function prototypes
double computeArea(Point &, Point &, Point &);

int main()
{
    // Display greeting
    cout << "Welcome to the 3D Triangle Area Calculator!" << endl << endl;

    // Point coordinate arrays
    double x[3];
    double y[3];
    double z[3];

    // Prompt user for point coordinate input
    for(int i=0; i<3; i++)
    {
        cout << "Please enter the X-coordinate for Point " << (i+1) << ": ";
        cin >> x[i];

        cout << "Please enter the Y-coordinate for Point " << (i+1) << ": ";
        cin >> y[i];

        cout << "Please enter the Z-coordinate for Point " << (i+1) << ": ";
        cin >> z[i];
        cout << endl;
    }

    // Create points
    Point p1 (x[0], y[0], z[0]);
    Point p2 (x[1], y[1], z[1]);
    Point p3 (x[2], y[2], z[2]);

    // Compute area of triangle and display
    cout << "The area of the triangle is: " << fixed << setprecision(2)
    << computeArea(p1, p2, p3) << endl << endl;

    return 0;
}

// Functions

// Uses distance between points and a semiparameter variable
// to calculate area (Heron's formula)
double computeArea(Point &a, Point &b, Point &c)
{
    // Calculate sides of triangle
    double side1 = a.distanceTo(b);
    double side2 = b.distanceTo(c);
    double side3 = a.distanceTo(c);

    // Calculate semiparameter variable
    double s = (side1 + side2 + side3) / 2;

    // Compute area of triangle using Heron's Formula
    double area = sqrt((s) * (s-side1) * (s-side2) * (s-side3));

    return area;
}

