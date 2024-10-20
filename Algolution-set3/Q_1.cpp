#include <iostream>
#include <vector>
using namespace std;

int findSquareFreeFactors(int number)
{
    int count = 0;
    vector<int> factors;

    for(int i = 2; i <= number / 2; i++){
        if(number % i == 0)
            factors.push_back(i);
    }
    factors.push_back(number);
    count = factors.size();

    cout << "No. of factors = " << factors.size() << endl;

    for(int i = 0; i < factors.size(); i++){
        for(int j = 2; j < factors[i]; j++){
            if(j*j == factors[i] || factors[i] % (j*j) == 0){
                count--;
                break;
            }
        }
    }

    return count;
}

int main(){
    int number;
    cout << "Enter the number: ";
    cin >> number;

     int count = findSquareFreeFactors(number);
     cout << "No. of square free factors are " << count;
}