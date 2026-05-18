// Question: Find smallest digit using pointer
#include <iostream>
using namespace std;
int main() {
    int n = 5271, min = 9;
    int *ptr = &n;
    while(*ptr > 0) {
        int digit = *ptr % 10;
        if(digit < min)
            min = digit;
        *ptr /= 10;
    }
    cout << min;
}