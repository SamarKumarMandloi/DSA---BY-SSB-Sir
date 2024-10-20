#include<iostream>
using namespace std;

//Using Sliding Window Technique

int main(){
    int size = 4, k, windowSum = 0, maxSum = 0;
    int arr[size] = {100, 200, 300, 400};

    cout << "Enter value of k: ";
    cin >> k;

    for(int i = 0; i < k; i++){
        windowSum = arr[i] + windowSum;
    }

    maxSum = windowSum;

    for(int i = 1; i < size-k+1; i++){
        windowSum = windowSum - arr[i-1] + arr[i+k-1];
        if(windowSum > maxSum){
            maxSum = windowSum;
        }
    }

    cout << maxSum;
    return 0;
}