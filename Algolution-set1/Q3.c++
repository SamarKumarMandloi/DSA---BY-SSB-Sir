#include <iostream>
using namespace std;

int main() 
{
    int arr1[5] = {1, 2, 3, 4, 5}, arr2[5] = {-5, 6, -3, -2, -1}, arr3[10];
    int i = 0, j = 0;

    for (int k = 0; k < 10; k++) {
        if (i < 5 && (j >= 5 || arr1[i] <= arr2[j])) {
            arr3[k] = arr1[i];
            i++;
        } else if (j < 5) {
            arr3[k] = arr2[j];
            j++;
        }
    }

    for (int x = 0; x < 10; x++) {
        cout << arr3[x] << "\t";
    }

    return 0;
}
