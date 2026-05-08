// Question: Print duplicate characters in a string
#include <iostream>
using namespace std;
int main() {
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++) {
        for(int j = i + 1; j < str.length(); j++) {
            if(str[i] == str[j]) {
                cout << str[i] << " ";
                break;
            }
        }
    }
}