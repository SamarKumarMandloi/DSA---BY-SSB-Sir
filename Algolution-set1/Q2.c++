#include <iostream>
using namespace std;

int main(){
	int arr[5] = {1, 2, 3, 4, 5}, max = arr[0];
	for(int i = 0; i < 5; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	cout << max;
	
	return 0;
}