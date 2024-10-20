#include<iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str = "A man, a plan, a canal: Panama", strCpy;

    // Convert all characters to lowercase
    for (char &c : str) {
        c = tolower(c);
    }

    for (int i = 0; i < str.size(); i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')) {
            strCpy.push_back(str[i]);
        }
    }
    int flag = 0, n = strCpy.size();
    for(int i = 0; i < strCpy.size(); i++){
        --n;
        if(strCpy[i] != strCpy[n]){
            flag = 0;
            break;
        }
        flag = 1;
    }
    if(flag == 1){
        cout << "Palindrome";
    }
    else{
        cout << "Not a Palindrome";
    }

    return 0;
}