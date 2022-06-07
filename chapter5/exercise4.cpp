#include <iostream>
#include <cmath>

using namespace std;

long int factorial(int n);

int main(){
	unsigned int n;
	cout << "Enter n: " << endl;
	cin >> n;
	cout << "Factorial: " << factorial(n) << endl;
	return 0;
}

long int factorial(int n){
	unsigned long int factorial = 1;
	for(unsigned int i = 1; i < n+1; i++){
		factorial *= i;  
	}
	return factorial;
}
