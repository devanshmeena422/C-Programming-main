// Question: Print natural numbers using function
#include <iostream>
using namespace std;
void naturalNumbers(int n) {
    for(int i = 1; i <= n; i++)
        cout << i << " ";
}
int main() {
    int n;
    cin >> n;
    naturalNumbers(n);
}