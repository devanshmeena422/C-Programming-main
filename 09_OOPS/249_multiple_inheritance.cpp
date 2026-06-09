// Question: Demonstrate multiple inheritance
#include <iostream>
using namespace std;
class A {
public:
    void showA() {
        cout << "A ";
    }
};
class B {
public:
    void showB() {
        cout << "B";
    }
};
class C : public A, public B {
};
int main() {
    C obj;
    obj.showA();
    obj.showB();
}