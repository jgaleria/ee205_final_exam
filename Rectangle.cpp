///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.cpp
/// @version 1.0
///
/// @author Joshua Galeria <jgaleria@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include "Rectangle.h"

//2 double members newLength and newWidth


//Constructor w/ length and width
Rectangle::Rectangle(float newLength,
                     float newWidth)
                     {
    Rectangle::validate();
                     }

//Getters for length and width
double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}


//Public override method compute_area()
double Rectangle::compute_area() const noexcept {
    return Rectangle::getLength() * Rectangle::getWidth();
}

//Validate function
bool Rectangle::validate() const noexcept {
    if( Rectangle::getWidth() <= 0 ) {
        return false;
    }
    if( Rectangle::getLength() <= 0) {
        return false;
    }
    return true;
}