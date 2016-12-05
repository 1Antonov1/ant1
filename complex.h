#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

using namespace std;

class Complex {
    double re,im;
public:
    Complex(){}
    Complex(double re, double im);
    void Set(double,double);
    double getRe();
    double getIm();
    Complex operator+ (Complex CM);
    Complex& operator= (const Complex &CM);
    double abs();
    friend void Show( Complex&);

};


#endif // COMPLEX_H
