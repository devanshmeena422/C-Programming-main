// Question: Demonstrate this pointer
#include <iostream>
using namespace std;
class Demo {
public:
    int x;
    void setValue(int x) {
        this->x = x;
    }
};
int main() {
    Demo d;
    d.setValue(50);
    cout << d.x;
}