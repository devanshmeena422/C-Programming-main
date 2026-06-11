// Question: Create array of objects
#include <iostream>
using namespace std;
class Student {
public:
    int id;
};
int main() {
    Student s[3];
    s[0].id = 101;
    s[1].id = 102;
    s[2].id = 103;
    for(int i = 0; i < 3; i++)
        cout << s[i].id << " ";
}