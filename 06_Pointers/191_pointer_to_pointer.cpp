// Question: Demonstrate pointer to pointer
#include <iostream>
using namespace std;
int main() {
    int a = 25;
    int *ptr = &a;
    int **dptr = &ptr;
    cout << **dptr;
}