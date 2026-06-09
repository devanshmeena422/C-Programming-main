// Question: Create class with data members
#include <iostream>
using namespace std;
class Employee {
public:
    int id;
    string name;
};
int main() {
    Employee e;
    e.id = 101;
    e.name = "Rahul";
    cout << e.id << " " << e.name;
}