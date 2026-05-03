// Question: Calculate power (base^exponent).

#include <iostream>
using namespace std;
int main() {
    int base, exp, result = 1;
    cin >> base >> exp;
    for(int i = 1; i <= exp; i++)
        result *= base;
    cout << result;
}