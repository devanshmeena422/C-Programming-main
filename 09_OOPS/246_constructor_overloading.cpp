// Question: Demonstrate constructor overloading
#include <iostream>
using namespace std;
class Demo {
public:
    Demo() {
        cout << "Default" << endl;
    }
    Demo(int x) {
        cout << x;
    }
};
int main() {
    Demo d1;
    Demo d2(10);
}