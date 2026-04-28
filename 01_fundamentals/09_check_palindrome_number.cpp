// Question: Check if a number is palindrome.

#include <iostream>
using namespace std;
int main() {
    int n, temp, rev = 0;
    cin >> n;

    temp = n;

    while(n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    if(temp == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}