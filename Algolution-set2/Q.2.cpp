#include<iostream>
using namespace std;

int countInversions(int arr[], int size){
    int countInversions = 0;

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] > arr[j]){
                countInversions++;
            }
        }
    }
    return countInversions;
}

int main(){
    int arr[4] = {7, 2, 6, 3};

    cout << countInversions(arr, 4);
}
