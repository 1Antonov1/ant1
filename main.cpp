# include <iostream>
# include <stdlib.h>
# include "complex.h"

using namespace std;
 int main() {
    Complex CM1,CM,CM3;
    cout << "Input real and image parts Complex 1" << endl;
    double re,im ;
    cin >> re;
    cin >> im;
    CM1.Set(re,im);
    cout << "Complex 1 (" << CM1.getRe() <<";"<< CM1.getIm () << " )" << endl;
    cout << "Input real and image parts Complex 2" << endl;
    cin >> re;
    cin >> im;
    CM.Set(re,im);
    cout << "Complex 2 (" << CM.getRe() <<";"<< CM.getIm () << " )" << endl;
    CM3 = CM1 + CM;
    cout << "Complex 3 (" << CM3.getRe() <<";"<< CM3.getIm () << " )" << endl;
    cout << "abs Complex" << endl;
    CM3.abs();
    cout << "Module Coplex  : " << CM3.abs() << endl;
    cout << "Show used fiend function" << endl;
    Show(CM1);
    Show(CM);
    Show(CM3);
 return 0;
 }
