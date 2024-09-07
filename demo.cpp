// write any code to test out your functions here
// run comman "make demo" to run this code
#include <iostream>
using namespace std;

int locateSmallest(int array[], int start, int end){
	int smallest = array[start];
	int location = start;
	for (int i = start; i <= end; i++){
		if (array[i] < smallest){
			smallest = array[i];
			location = i;
			
		}
	}
	return location ; // fix this!
}

void replaceVariable(int array[], int start, int end, int target) {
	for (int i = start; i <= end; i++){
		if(array[i] = target){
			array[i] = 1000;
		}
	}

	return;
}

int main() {
int array[] = {7,48,6,3,8,4,1,5};
int start = 0;
int end = 7;
cout << locateSmallest(array, start, end) << endl;
    return 0;
}



