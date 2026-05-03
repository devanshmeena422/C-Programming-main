// Question: Find LCM of two numbers.

#include <iostream>
using namespace std;
int main() {
    int a, b, lcm;
    cin >> a >> b;
    int max = (a > b) ? a : b;
    for(int i = max; ; i++) {
        if(i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }
    cout << lcm;
}