///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Square.h
/// @version 1.0
///
/// @author Joshua Galeria <jgaleria@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_FINAL_EXAM_SQUARE_H
#define EE205_FINAL_EXAM_SQUARE_H

#include "Rectangle.h"

//Publicly inherits from rectangle
class Square : public Rectangle {
public:
    Square(double newSide);

public:
    double getSide() const;

    double compute_area() const noexcept override;
};




#endif //EE205_FINAL_EXAM_SQUARE_H
