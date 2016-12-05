#include "complex.h"
#include <math.h>
#include <iostream>

using namespace std;

Complex::Complex(double re, double im) {
    this->re = re;
    this->im = im;
}
void Complex::Set(double re, double im) {
    this->re = re;
    this->im = im;
}
double Complex::getRe(){    return re;
}
double Complex::getIm(){    return im;
}
Complex Complex::operator +(Complex CM) {
    Complex tmp;
    tmp.re = re + CM.re;
    tmp.im = im + CM.im;
    return tmp;
}
Complex& Complex::operator =(const Complex &CM) {
    re = CM.re;
    im = CM.im;
    return *this;
}
double Complex::abs(){
    double a;
    a = sqrt(re*re + im*im);
    return a;
}

void Show(Complex& object)
{
    cout << object.re << "\t" << object.im << endl;
}
