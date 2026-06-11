// Question: Demonstrate operator overloading
#include <iostream>
using namespace std;
class Demo {
public:
    int value;
    Demo(int v) {
        value = v;
    }
    Demo operator+(Demo obj) {
        return Demo(value + obj.value);
    }
};
int main() {
    Demo d1(10), d2(20);
    Demo d3 = d1 + d2;
    cout << d3.value;
}