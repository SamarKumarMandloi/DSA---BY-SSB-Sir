#include<iostream>
using namespace std;

/*(a)Using naive approach

int main(){
    int size = 6, Sum, flag = 0;
    int arr[size] = {1, 2, 4, 5, 7, 11};
    cout << "Enter Sum: ";
    cin >> Sum;

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] + arr[j] == Sum){
                cout << "Numbers are: " << arr[i] << " and " << arr[j] << endl;
                flag = 1;
            }
        }
    }
    if(flag != 1){
        cout << "No such numbers found...";
    }
    return 0;
}
*/

//(b)Using two pointer technique

int main(){
    int size = 6, currSum = 0, Sum, flag = 0;
    int arr[size] = {1, 2, 4, 5, 7, 11};

    cout << "Enter Sum: ";
    cin >> Sum;

    int i = 0, j = size-1;
    while(i < j){
        if(arr[i] + arr[j] > Sum){
            j--;
        }
        else if(arr[i] + arr[j] < Sum){
            i++;
        }
        else{
            cout << "Numbers are: " << arr[i] << " and " << arr[j] << endl;
            flag = 1;
            i++;
            j--;
        }
    }

    if(flag != 1){
        cout << "No such numbers found...";
    }
    return 0;
}



