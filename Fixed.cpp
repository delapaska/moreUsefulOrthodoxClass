//
// Created by andrey on 21.01.2022.
//
#include <cmath>
#include <iostream>
#include "Fixed.h"
Fixe::Fixe() { // Default constructor
    //fixedPoint = 0;

    std::cout << "Default constructor called"<< std::endl;
}
Fixe::Fixe(const Fixe &f) { // Copy constructor
    std::cout << "Copy constructor called"<<std::endl;

}
Fixe::~Fixe() { // Destructor
    std::cout << "Destructor called"<<std::endl;
}

Fixe &Fixe::operator=(const Fixe &f) { // Assignation operator
    std:: cout << "Assignation operator called" << std::endl;
   return *this;
}

 Fixe::Fixe(const int fixInt) {

    std::cout << "Int constructor called" << std::endl;
    std::cout << fixInt;
    fixedPoint= fixInt;
}
Fixe::Fixe(const float fixFloat) {
    std::cout << "Float constructor called" << std::endl;
    std::cout << fixFloat;
   fixedPoint = (int)fixFloat;
}


int Fixe::toInt() const {
   int y = (int)fixedPoint;
   return y;
}
float Fixe::toFloat() const {

}







