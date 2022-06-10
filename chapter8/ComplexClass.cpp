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
ComplexClass operator+(ComplexClass& complexNumber1, ComplexClass& complexNumber2)
{
    ComplexClass complexNumber3;
    complexNumber3.setReal(complexNumber1.getReal()+complexNumber2.getReal());
    complexNumber3.setImaginary(complexNumber1.getImaginary()+complexNumber2.getImaginary());
    return complexNumber3;
}
ComplexClass operator-(ComplexClass& complexNumber1, ComplexClass& complexNumber2)
{
    ComplexClass complexNumber3;
    complexNumber3.setReal(complexNumber1.getReal()-complexNumber2.getReal());
    complexNumber3.setImaginary(complexNumber1.getImaginary()-complexNumber2.getImaginary());
    return complexNumber3;
}
// To be added: multiplication and division, modulus.
ComplexClass operator*(ComplexClass& complexNumber1, ComplexClass& complexNumber2)
{
    ComplexClass complexNumber3;
    float real = complexNumber1.getReal()*complexNumber2.getReal()-complexNumber1.getImaginary()*complexNumber2.getImaginary();
    float imaginary = complexNumber1.getReal()*complexNumber2.getImaginary()+complexNumber2.getReal()*complexNumber1.getImaginary();
    complexNumber3.setReal(real);
    complexNumber3.setImaginary(imaginary);
    return complexNumber3;
    
}
ComplexClass operator/(ComplexClass& complexNumber1, ComplexClass& complexNumber2)
{
    ComplexClass complexNumber3;
    float real = (complexNumber1.getReal()*complexNumber2.getReal())-(complexNumber1.getImaginary()*complexNumber2.getImaginary());
    float imgaginary = (complexNumber1.getReal()*complexNumber2.getImaginary())-(complexNumber1.getImaginary()*complexNumber2.getReal());
    float denom = complexNumber2.getReal()*complexNumber2.getReal()+complexNumber2.getImaginary()*complexNumber2.getImaginary();
    real = real/denom;
    imgaginary = imgaginary/denom;
    complexNumber3.setReal(real);
    complexNumber3.setImaginary(imgaginary);
    return complexNumber3;
    
}
