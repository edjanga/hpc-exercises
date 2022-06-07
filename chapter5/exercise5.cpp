#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const double pi = 3.141592;
void sin(int x=100);

int main(){
	sin();
	return 0;	
}

void sin(int x){
	//truc: delete the file and create a new one if the file already exists.
	ofstream vOut("sin.csv", ios::out|ios::trunc);
	vOut.precision(7);
	unsigned int i = 0;
	if(vOut.good()){
		do{	
			vOut << i << "," << (2*pi*i)/100 << endl;
			i++;
		}
		while(i<100);
	}
	vOut.close();
}
