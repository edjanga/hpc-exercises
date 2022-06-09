#include <iostream>


using namespace std;

// Pass by Reference

int main(){
    unsigned int n;
    cout << "Enter size of array: " << endl;
    cin >> n;
    float* vMatrix = new float [n*n];
    for(unsigned int i = 0; i < n; i++){
        for(unsigned int j = 0; j < n; j++){
            vMatrix[j+n*i] = (i+1)*(j+1);
        }
    }

    for(unsigned int i = 0; i < n; i++){
        for(unsigned int j = 0; j < n; j++){
            cout << vMatrix[j+n*i] << " ";
        }
        cout << endl;
    }
    delete[] vMatrix;
    return 0;
}
