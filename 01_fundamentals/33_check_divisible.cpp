// Question: Check if a number is divisible by 5 and 11.

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if(n % 5 == 0 && n % 11 == 0)
        cout << "Divisible";
    else
        cout << "Not Divisible";
}