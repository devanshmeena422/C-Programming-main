// Question: Find power using function
#include <iostream>
using namespace std;
int power(int base, int exp) {
    int result = 1;
    for(int i = 1; i <= exp; i++)
        result *= base;
    return result;
}
int main() {
    int base, exp;
    cin >> base >> exp;
    cout << power(base, exp);
}