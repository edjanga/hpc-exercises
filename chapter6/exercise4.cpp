#include <iostream>

using namespace std;

int fibRecursion(unsigned int n);
int main(){
	unsigned int n;
	cout << "Enter n: " << endl;
	cin >> n;
	cout << n << "-th Fibonacci number: " << fibRecursion(n-1) << endl;
	return 0;
}

int fibRecursion(unsigned int n){
	if((n==0)||(n==1)){
		return 1;
	}
	else{
		return fibRecursion(n-1)+fibRecursion(n-2);
	}
}
