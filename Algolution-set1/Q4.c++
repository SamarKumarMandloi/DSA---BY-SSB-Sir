#include <iostream>
using namespace std;

int main() {
    int arr[7],n = 6;
    
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 3; i++) {
        swap(arr[i], arr[n]);
        n--;
    }

    for (int i = 0; i < 7; i++) {
        cout << arr[i] << "\t";
    }

    return 0;
}
