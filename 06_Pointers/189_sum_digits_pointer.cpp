// Question: Find sum of digits using pointer
#include <iostream>
using namespace std;
int main() {
    int n = 1234, sum = 0;
    int *ptr = &n;
    while(*ptr > 0) {
        sum += *ptr % 10;
        *ptr /= 10;
    }
    cout << sum;
}