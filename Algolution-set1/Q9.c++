#include <iostream>
using namespace std;

int main() 
{
    int arr[5] = {1, 2, 4, 3, 3},n=5,duplicateCount = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicateCount++;
                break;
            }
        }
    }

    cout << "Total number of duplicate elements: " << duplicateCount << endl;

    return 0;
}
