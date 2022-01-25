#include <iostream>
#include "Fixed.h"
int main() {
    Fixe A;
    Fixe const B(10);
    Fixe const C(42.42f);
    Fixe const d(B);
    A = Fixe(42.42f);
    std::
    std::cout <<"a is" << A.toInt() << " " << "is integer" <<std::endl;
    std::cout <<"b is" << B.toInt() << " " << "is integer" <<std::endl;
    std::cout <<"c is" << C.toInt() << " " << "is integer" <<std::endl;
    std::cout <<"d is" << d.toInt() << " " << "is integer" <<std::endl;
}
