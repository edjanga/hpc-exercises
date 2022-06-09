#ifndef COMPLEXCLASS_H
#define COMPLEXCLASS_H

#pragma once

using namespace std;

class ComplexClass
{
    public:
        ComplexClass(float a, float b); // Constructor
        ~ComplexClass(); // Deconstructor
        void setReal(float a);
        void setImaginary(float b);
        float getReal();
        float getImaginary();
        // friend method --> needed to overload << operator
        friend ostream& operator<<(ostream& COUT, const ComplexClass& complexNumber);
        //friend ComplexClass& operator+(ComplexClass& complexNumber1, ComplexClass& complexNumber2);

    private:
        float real;
        float imaginary;

};
// List of operator overloadings
ostream& operator<<(ostream& COUT, const ComplexClass& complexNumber);
/*ComplexClass& operator+(ComplexClass& complexNumber1, ComplexClass& complexNumber2);*/

#endif