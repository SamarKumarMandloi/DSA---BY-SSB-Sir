#include<iostream>
using namespace std;

int main(){
    int size = 6, profit, minPrice, maxProfit = -1;
    int arr[size] = {7, 1, 5, 3, 6, 4};
    minPrice = arr[0];

    for(int i = 0; i < size; i++){
        if(minPrice > arr[i]){
            minPrice = arr[i];
        }
        profit = arr[i] - minPrice;
        if(maxProfit < profit){
            maxProfit = profit;
        }
    }

    cout << maxProfit;

    return 0;
}