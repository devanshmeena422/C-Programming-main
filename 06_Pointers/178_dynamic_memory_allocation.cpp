// Question: Allocate memory dynamically using new
#include <iostream>
using namespace std;
int main() {
    int *ptr = new int;
    *ptr = 50;
    cout << *ptr;
    delete ptr;
}