// Question: Find largest digit using pointer
#include <iostream>
using namespace std;
int main() {
    int n = 5271, max = 0;
    int *ptr = &n;
    while(*ptr > 0) {
        int digit = *ptr % 10;
        if(digit > max)
            max = digit;
        *ptr /= 10;
    }
    cout << max;
}