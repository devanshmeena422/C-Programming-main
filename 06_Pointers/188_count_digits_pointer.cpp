// Question: Count digits using pointer
#include <iostream>
using namespace std;
int main() {
    int n = 12345, count = 0;
    int *ptr = &n;
    while(*ptr > 0) {
        count++;
        *ptr /= 10;
    }
    cout << count;
}