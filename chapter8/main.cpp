#include <iostream>
#include "ComplexClass.cpp"

using namespace std;

int main(){

    ComplexClass test1(1.0,1.0);
    ComplexClass test2(2.7,3.0);
    ComplexClass test3 = test1/test2;
    cout << test3 << endl;
    return 0;
}