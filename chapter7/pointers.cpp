#include <iostream>
using namespace std;
int main(){
    int N;
    int M=N;
	cout << "Enter number of rows N: ";
    cin >> N;
	// dynamically allocate memory of size M*N
	int *vMatrix = new int[M * N];
	// assign values to allocated memory
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			if(i==j){
				vMatrix[i*M+j] = 1;
			}
			else{
				vMatrix[i*M+j] = 0;
			}
		}
	}
	// print the 2D array
	for (int i = 0; i < N; i++){
    	for (int j = 0; j < M; j++){
        	//cout << vMatrix[i*M+j] << " ";
			cout << vMatrix[i][j] << " ";
    	}
	cout << endl;
	}
	// deallocate memory
	delete[] vMatrix;
	return 0;
}
 