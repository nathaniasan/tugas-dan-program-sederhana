#include <iostream>
using namespace std;

int main(){
	int arr[10] = {13, 15, 19, 7, 2, 5, 19, 20, 4, 10};
	bool swapped;
	int indexOfUnsorted = 9;
	
	do{
		swapped = false;
		for(int i = 0;i < indexOfUnsorted;i++){
			if(arr[i] > arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				swapped = true;
			}
		}
		indexOfUnsorted--;
	}while(swapped);
	
	for(int j = 0;j < 10;j++){
		cout << arr[j] << " ";
	}
}
