// Question: Create a class with member function
#include <iostream>
using namespace std;
class Student {
public:
    void display() {
        cout << "Student Class";
    }
};
int main() {
    Student s;
    s.display();
}