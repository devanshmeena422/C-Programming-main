// Question: Find cube of a number using function
#include <iostream>
using namespace std;
int cube(int n) {
    return n * n * n;
}
int main() {
    int n;
    cin >> n;
    cout << cube(n);
}