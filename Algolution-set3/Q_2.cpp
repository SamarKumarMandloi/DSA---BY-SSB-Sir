#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[3] = {10, 100, 1000}, size = 3, orEle = 0;
    vector<int> orArr;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            orEle = orEle | arr[j];
            orArr.push_back(orEle);
        }
    }
    for(int i = 0; i < orArr.size(); i++){
        orEle = orEle | orArr[i];
    }
    cout << "Output = " << orEle;
}