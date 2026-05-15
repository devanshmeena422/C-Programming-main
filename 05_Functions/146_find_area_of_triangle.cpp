// Question: Find area of triangle using function
#include <iostream>
using namespace std;
float area(float b, float h) {
    return 0.5 * b * h;
}
int main() {
    float b, h;
    cin >> b >> h;
    cout << area(b, h);
}