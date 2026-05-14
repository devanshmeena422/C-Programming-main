// Question: Reverse string using function
#include <iostream>
using namespace std;
string reverseString(string str) {
    string rev = "";
    for(int i = str.length() - 1; i >= 0; i--)
        rev += str[i];
    return rev;
}
int main() {
    string str;
    cin >> str;
    cout << reverseString(str);
}