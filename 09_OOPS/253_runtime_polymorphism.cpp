// Question: Demonstrate runtime polymorphism
#include <iostream>
using namespace std;
class Parent {
public:
    virtual void show() {
        cout << "Parent";
    }
};
class Child : public Parent {
public:
    void show() {
        cout << "Child";
    }
};
int main() {
    Parent *p;
    Child c;
    p = &c;
    p->show();
}