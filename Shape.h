///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Shape.h
/// @version 1.0
///
/// @author Joshua Galeria <jgaleria@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_FINAL_EXAM_SHAPE_H
#define EE205_FINAL_EXAM_SHAPE_H


class Shape {
public:
    virtual double compute_area( const double length, const double width) const noexcept;
};


#endif //EE205_FINAL_EXAM_SHAPE_H
