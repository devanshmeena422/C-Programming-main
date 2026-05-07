// Question: Find last occurrence of character
#include <iostream>
using namespace std;
int main() {
    string str;
    char ch;
    cin >> str >> ch;
    for(int i = str.length() - 1; i >= 0; i--) {
        if(str[i] == ch) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
}