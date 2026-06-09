// Question: Demonstrate parameterized constructor
#include <iostream>
using namespace std;
class Student {
public:
    Student(string name) {
        cout << name;
    }
};
int main() {
    Student s("Devansh");
}