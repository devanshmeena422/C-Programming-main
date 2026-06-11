// Question: Demonstrate friend function
#include <iostream>
using namespace std;
class Demo {
private:
    int num = 100;
    friend void display(Demo);
};
void display(Demo d) {
    cout << d.num;
}
int main() {
    Demo d;
    display(d);
}