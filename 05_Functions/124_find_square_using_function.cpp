// Question: Find square of a number using function
#include <iostream>
using namespace std;
int square(int n) {
    return n * n;
}
int main() {
    int n;
    cin >> n;
    cout << square(n);
}