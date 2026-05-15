// Question: Find sum of natural numbers using function
#include <iostream>
using namespace std;
int sumNatural(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++)
        sum += i;
    return sum;
}
int main() {
    int n;
    cin >> n;
    cout << sumNatural(n);
}