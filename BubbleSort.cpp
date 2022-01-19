#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
class Sorting{
private:
	void swap(int arr[], int i, int j);
public:
	void bubbleSort(int arr[], int N);
};

void Sorting::swap(int arr[], int i, int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void Sorting::bubbleSort(int arr[], int N){
	for(int i=N-1; i>0; i--){
		for(int j=0; j<i; j++){
			if (arr[j] > arr[j+1]){
				swap(arr, j, j+1);
			}
		}
	}
}

int main(int argc, char** argv) {
	Sorting *s = new Sorting();
	int n = 20;
	int arr[n];
	srand(time(0));
	for(int i=0; i<n; i++){
		arr[i]=rand()%100+1;
		cout << arr[i] << " ";
	}
	cout << "My Array" << endl << endl;
	
	s->bubbleSort(arr, n);
	
	for(int i=0; i<n; i++){
		cout << arr[i] << " " ;
	}
	cout << "Bubble Sort";
	return 0;
}
