// Question: Compare two numbers using pointers
#include <iostream>
using namespace std;
int main() {
    int a = 20, b = 10;
    int *p1 = &a;
    int *p2 = &b;
    if(*p1 > *p2)
        cout << *p1;
    else
        cout << *p2;
}