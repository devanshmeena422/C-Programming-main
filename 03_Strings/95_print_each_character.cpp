// Question: Print each character of string in new line
#include <iostream>
using namespace std;
int main() {
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++)
        cout << str[i] << endl;
}