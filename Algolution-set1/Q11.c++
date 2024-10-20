#include <iostream>
using namespace std;

void printRightTriangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        cout << string(i, '*') << endl;
    }
}

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    printRightTriangle(rows);
    return 0;
}