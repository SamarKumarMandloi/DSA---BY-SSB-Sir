#include<iostream>
using namespace std;

int main(){
    int size = 7, leftSum = 0, rightSum = 0, flag = 0;
    int arr[size] = {-7, 1, 5, 2, -4, 3, 0};

    for(int i = 0; i < size; i++){
        leftSum = 0;
        rightSum = 0;
        for(int j = 0; j < size; j++){

            if(i > j){
                leftSum = arr[j] + leftSum;
            }
            else if(i < j){
                rightSum = arr[j] + rightSum;
            }
        }
        if(leftSum == rightSum){
            cout << "Equilibrium Index = " << i << endl;
            flag = 1;
        }
    }
    if(flag == 0){
        cout << -1;
    }
    return 0;
}