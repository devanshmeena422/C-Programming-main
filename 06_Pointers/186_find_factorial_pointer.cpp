// Question: Find factorial using pointer
#include <iostream>
using namespace std;
int main() {
    int n = 5, fact = 1;
    int *ptr = &n;
    for(int i = 1; i <= *ptr; i++)
        fact *= i;
    cout << fact;
}