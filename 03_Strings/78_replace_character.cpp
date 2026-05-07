// Question: Replace a character in string
#include <iostream>
using namespace std;
int main() {
    string str;
    cin >> str;
    char oldChar, newChar;
    cin >> oldChar >> newChar;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == oldChar)
            str[i] = newChar;
    }
    cout << str;
}