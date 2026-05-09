// Question: Check whether a string is pangram
#include <iostream>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    bool alpha[26] = {false};
    for(int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        if(ch >= 'a' && ch <= 'z')
            alpha[ch - 'a'] = true;
    }
    for(int i = 0; i < 26; i++) {
        if(alpha[i] == false) {
            cout << "Not Pangram";
            return 0;
        }
    }
    cout << "Pangram";
}