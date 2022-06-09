#include <iostream>
#include <cstdlib>
#include <cstdlib>

using namespace std;

float max(float arr[100]);
float min(float arr[100]);
float mean(float arr[100]);

int main(){
	srand(time(0));
	float random_numbers[100];
	for(unsigned int i = 0; i < 100; i++){
		random_numbers[i] = static_cast<float>(rand())/static_cast<float>(RAND_MAX)*100;
	}
	cout << "Max: " << max(random_numbers) << endl;;
	cout << "Min: " << min(random_numbers) << endl;;
	cout << "Mean: " << mean(random_numbers) << endl;
	return 0;
}


float max(float arr[100]){
	float vMax = 0.00;
	for(unsigned int i = 0; i<100; i++){
		if(vMax < arr[i]){
			vMax = arr[i];
		}
	}
	return vMax;
}

float min(float arr[100]){
        float vMin = 100000;
        for(unsigned int i = 0; i<100; i++){
                if(vMin > arr[i]){
                        vMin = arr[i];
                }
        }
        return vMin;
}


float mean(float arr[100]){
        float vMean = 0.00;
        for(unsigned int i = 0; i<100; i++){
                vMean += arr[i];
        }
	vMean /= 100;
    return vMean;
}

