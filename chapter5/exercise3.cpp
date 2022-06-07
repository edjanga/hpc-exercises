#include <iostream>
#include <cmath>

using namespace std;

double approximationPi(int k);

int main(){
	// k = 200000 generates pi with 5 correct decimals.	
	int k;
	cout << "Enter k: " << endl;
	cin >> k;
	cout << "Pi approximation: " << approximationPi(k) << endl;
	return 0;
}

double approximationPi(int k){
	double pi = 0.0;
	for(unsigned int i = 0; i < k; i++){
		pi += pow(-1,i)/(2*i+1);  
	}
	pi *= 4;
	return pi;
}
