// Question: Print Pascal's triangle
#include <iostream>
using namespace std;
int main() {
    int n, coef = 1;
    cin >> n;
    for(int i = 0; i < n; i++) {
        coef = 1;
        for(int space = 1; space <= n - i; space++)
            cout << " ";
        for(int j = 0; j <= i; j++) {
            cout << coef << " ";
            coef = coef * (i - j) / (j + 1);
        }
        cout << endl;
    }
}