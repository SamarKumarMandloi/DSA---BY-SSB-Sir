#include <iostream>
using namespace std;

int main(){
	int arr[5] = {1, 2, 3, 4, 5}, num, flag = 0;
	cout << "Enter the number: ";
	cin >> num;
	
	for(int i = 0; i < 5; i++){
		if(arr[i] == num){
			cout << "Index = " << i;
			flag = 1;
			break;
		}
	}
	
	if(flag == 0){
		cout << -1;
	}
}