// Question: Demonstrate default constructor
#include <iostream>
using namespace std;
class Demo {
public:
    Demo() {
        cout << "Constructor Called";
    }
};
int main() {
    Demo d;
}