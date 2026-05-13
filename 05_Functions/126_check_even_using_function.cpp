// Question: Check even or odd using function
#include <iostream>
using namespace std;
void checkEven(int n) {
    if(n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
}
int main() {
    int n;
    cin >> n;
    checkEven(n);
}