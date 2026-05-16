// Question: Find maximum number using pointers
#include <iostream>
using namespace std;
int main() {
    int a = 15, b = 20;
    int *p1 = &a;
    int *p2 = &b;
    if(*p1 > *p2)
        cout << *p1;
    else
        cout << *p2;
}