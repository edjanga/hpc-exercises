#include <iostream>
#include <iomanip>


using namespace std;

void swap(int& a,int& b);

int main(){
	int vA, vB;
	cout << "Enter two integers: " << endl;
	cin >> vA >> vB;
	cout << "The first integer equals " << vA << "." << endl;
	cout << "The second integer equals " << vB << "." << endl;
	swap(vA,vB);
	cout << "The first integer equals " << vA << " now." << endl;
        cout << "The second integer equals " << vB << " now." << endl;	
	return 0;
}

void swap(int& a,int& b){
	int temp = a;
	a = b;
	b = temp;
}
