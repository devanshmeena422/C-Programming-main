// Question: Swap two numbers using a temporary variable.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int temp = a;
    a = b;
    b = temp;

    cout << a << " " << b;
}