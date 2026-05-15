// Question: Find ASCII value using function
#include <iostream>
using namespace std;
int asciiValue(char ch) {
    return int(ch);
}
int main() {
    char ch;
    cin >> ch;
    cout << asciiValue(ch);
}