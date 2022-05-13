///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.h
/// @version 1.0
///
/// @author Joshua Galeria <jgaleria@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_FINAL_EXAM_RECTANGLE_H
#define EE205_FINAL_EXAM_RECTANGLE_H

//Inherits from Shape

#include "Shape.h"

class Rectangle : public Shape {
    //Member variables
protected:
    double length;
    double width;


public:
    //Constructor
    Rectangle(float newLength,
              float newWidth );

    //Getters
protected:
    double getLength() const;
    double getWidth() const;


    //Methods
public:
    double compute_area() const noexcept override;

    bool validate() const noexcept;
};



#endif //EE205_FINAL_EXAM_RECTANGLE_H
