#include <iostream>
#include "ComplexClass.cpp"

using namespace std;

int main(){

    ComplexClass complexNumber(1.0,1.0);
    cout << complexNumber;
    /*ComplexClass test1(1.0,1.0);
    ComplexClass test2(2.7,3.0);
    cout << test1+test2 << endl;*/
    return 0;
}