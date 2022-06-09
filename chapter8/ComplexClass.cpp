#include "ComplexClass.hpp"
#include <iostream>

using namespace std;

ComplexClass::ComplexClass(float a, float b)
{
    setReal(a);
    setImaginary(b);
}
ComplexClass::~ComplexClass()
{

}
void ComplexClass::setReal(float a)
{
    real = a;
}
void ComplexClass::setImaginary(float b)
{
    imaginary = b;
}
float ComplexClass::getReal()
{
    return real;
}
float ComplexClass::getImaginary()
{
    return imaginary;
}
ostream& operator<<(ostream& COUT, ComplexClass& complexNumber)
{   
    // No binary scope operator as this is a friend and the operator does not belong to the ComplexClass function
    // Rule of thumb: pass by reference ---> argument expensive to copy 
    COUT << complexNumber.getReal() << " " << complexNumber.getImaginary() << endl;
    return COUT;
}
/*ComplexClass& operator+(ComplexClass& complexNumber1, ComplexClass& complexNumber2)
{
    ComplexClass complexNumber3(0.0,0.0);
    ComplexClass* vPointer = &complexNumber3
    complexNumber3.setReal(complexNumber1.getReal()+complexNumber2.getReal());
    complexNumber3.setImaginary(complexNumber1.getImaginary()+complexNumber2.getImaginary());
    return complexNumber3;
}*/