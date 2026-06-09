// Question: Demonstrate hierarchical inheritance
#include <iostream>
using namespace std;
class Parent {
public:
    void show() {
        cout << "Parent";
    }
};
class Child1 : public Parent {
};
class Child2 : public Parent {
};
int main() {
    Child1 c1;
    c1.show();
}