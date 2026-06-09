// Question: Demonstrate single inheritance
#include <iostream>
using namespace std;
class Parent {
public:
    void show() {
        cout << "Parent";
    }
};
class Child : public Parent {
};
int main() {
    Child c;
    c.show();
}