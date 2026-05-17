// Question: Check even or odd using pointer
#include <iostream>
using namespace std;
int main() {
    int n = 8;
    int *ptr = &n;
    if(*ptr % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
}