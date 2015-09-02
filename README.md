## CSCI 2312: Programming Assignment 1

Three Dimension Triangle Area Calculator

Author:     Dylan Lang
Date:       2 Sept 2015

System Info -
Operating System:   Windows 8.1 64-bit
Processor:          x64-based

Toolchain -
IDE:            CLion 1.1
Compiler:       GCC/G++
Terminal:       Cygwin64
Build Manager:  CMake 3.3
                make
Debugger:       GDB 7.8

This program essentially calculates the area of a triangle in three-dimensional space.

It does this by requiring the user to enter an x-, y-, and z-coordinate for three points.

It then creates a Point using the Point class created in Point.h and implemented in Point.cpp.

Using the coordinates for each point, the program then calculates the distance between each point using the Pythagorean Theorem.

Once these distances have been calculated, they are used in Heron's formula to calculate the area of the triangle and output it to the display.
