// Question: Increment value using pointer
#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int *ptr = &a;
    (*ptr)++;
    cout << a;
}