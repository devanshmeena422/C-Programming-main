// Question: Find first occurrence of character
#include <iostream>
using namespace std;
int main() {
    string str;
    char ch;
    cin >> str >> ch;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ch) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
}