// Question: Print squares of numbers from 1 to n.

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cout << i*i << " ";
}