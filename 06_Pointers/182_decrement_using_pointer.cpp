// Question: Decrement value using pointer
#include <iostream>
using namespace std;
int main() {
    int a = 20;
    int *ptr = &a;
    (*ptr)--;
    cout << a;
}