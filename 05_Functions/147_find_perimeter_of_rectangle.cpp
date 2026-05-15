// Question: Find perimeter of rectangle using function
#include <iostream>
using namespace std;
int perimeter(int l, int b) {
    return 2 * (l + b);
}
int main() {
    int l, b;
    cin >> l >> b;
    cout << perimeter(l, b);
}