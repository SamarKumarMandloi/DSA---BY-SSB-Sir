#include <iostream>
using namespace std;

int main(){
	int arr[5] = {1, 2, 4, 3, 3}, frequencyArr[5] = {0, 0, 0, 0, 0};
	for(int i = 0; i < 5; i++)
    {
		for(int j = 0; j < 5; j++)
        {
			if(arr[i] == arr[j])
            {
				frequencyArr[i]++;
			}
		}
	}
	cout << endl;

	for(int i = 0; i < 5; i++)
    {
		cout << frequencyArr[i] << "\t";
	}
    return 0;
}