#include "complex.h"
#include <iostream>

using namespace std;


template <class T>
Complex<T>::Complex()
{
    Real = 0;
    Imaginary = 0;
}
template <class T>
Complex<T>::Complex(T r, T i)
{

  Real = r;
  Imaginary = i;

}
template <class T>
Complex<T> Complex <T>::operator+ (Complex a)
{
    Complex<T> t;
    t.Real = Real + a.Real;
    t.Imaginary = Imaginary + a.Imaginary;
    return t;
}
template <class T>
void Complex<T>::Print ()
{
    cout << this->Real << " + " << this->Imaginary << "i\n";
}

template <class T>
Complex<T> Complex <T>::operator* (Complex t)
{
    Complex<T> z;
    z.Real = (this->Real*t.Real) - (this->Imaginary*t.Imaginary);
    z.Imaginary = (this->Imaginary*t.Real) +( this->Real*t.Imaginary);
    return z;
}

template <class T>
bool Complex <T>::operator!= (Complex t)
{
    return (this->Real != t.Real && this->Imaginary != t.Imaginary);
}