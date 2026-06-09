// Question: Create a simple class and object
#include <iostream>
using namespace std;
class Student {
public:
    string name;
};
int main() {
    Student s;
    s.name = "Devansh";
    cout << s.name;
}