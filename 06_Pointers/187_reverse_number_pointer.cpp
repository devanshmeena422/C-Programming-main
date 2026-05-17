// Question: Reverse number using pointer
#include <iostream>
using namespace std;
int main() {
    int n = 1234, rev = 0;
    int *ptr = &n;
    while(*ptr > 0) {
        rev = rev * 10 + (*ptr % 10);
        *ptr /= 10;
    }
    cout << rev;
}