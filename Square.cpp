///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Square.cpp
/// @version 1.0
///
/// @author Joshua Galeria <jgaleria@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include "Square.h"

//Public constructor
Square::Square(double newSide) : Rectangle(newSide, newSide) {}

//Getter for side
double Square::getSide() const {
    return Rectangle::getLength();
}

//Area for Square
double Square::compute_area() const noexcept {
    return Square::getSide() * Square::getSide();
}
