#include <iostream>
#include <iomanip>

using namespace std;

int factorialRecursion(int n);
float binomialCoefficient(int n, int k);
void pascalTriangle(int height);
int main(){
        unsigned int n;
        int k;
        cout << "Enter n: " << endl;
        cin >> n;
        pascalTriangle(n);
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

void pascalTriangle(int height){
	for(unsigned int i = 0; i<height; i++){
		for(unsigned int j = 0; j < i+1; j++){
			cout << binomialCoefficient(i,j) << " ";
		}
		cout << endl;
	}
}
