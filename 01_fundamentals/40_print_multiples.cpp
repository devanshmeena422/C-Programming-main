// Question: Print multiples of a number up to n.

#include <iostream>
using namespace std;
int main() {
    int n, num;
    cin >> num >> n;
    for(int i = 1; i <= n; i++)
        cout << num * i << " ";
}