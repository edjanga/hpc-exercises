#include <iostream>
#include <iomanip>

using namespace std;

int factorialRecursion(int n);
float binomialCoefficient(int n, int k);

int main(){
	unsigned int n;
	int k;
	cout << "Enter n: " << endl;
	cin >> n;
	cout << "Enter k: " << endl;
	cin >> k;
	cout << "Binomial coeffecient (recursion): " << binomialCoefficient(n,k) << endl;
	return 0;
}

int factorialRecursion(int n){
	if(n==0){
		return 1;
	}
	else{
		return n*factorialRecursion(n-1);
	}
}

float binomialCoefficient(int n, int k){
	
	int num = factorialRecursion(n);
	int denom = factorialRecursion(k)*factorialRecursion(n-k);
	float coefficient = num/denom;
	return coefficient;
}

