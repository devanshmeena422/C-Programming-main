// Question: Convert first character to uppercase
#include <iostream>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    str[0] = toupper(str[0]);
    cout << str;
}