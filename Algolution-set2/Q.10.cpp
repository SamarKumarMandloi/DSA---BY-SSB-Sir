#include<iostream>
#include <algorithm> 
using namespace std;

bool areAnagrams(string str1, string str2){
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1 == str2;
}

int main(){
    string anagramStr1, anagramStr2;

    cout << "Enter 2 strings: " << endl;
    cin >> anagramStr1;
    cin >> anagramStr2;

    if(areAnagrams(anagramStr1, anagramStr2) == true) 
        cout << "Are anagrams...";
    else
        cout << "Are not anagrams...";

    return 0;
}