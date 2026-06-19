// Question: Convert binary number to decimal
#include <iostream>
using namespace std;
int main() {
    int binary, decimal = 0, base = 1;
    cin >> binary;
    while(binary > 0) {
        decimal += (binary % 10) * base;
        base *= 2;
        binary /= 10;
    }
    cout << decimal;
}