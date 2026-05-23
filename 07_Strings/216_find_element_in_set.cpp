// Question: Search element in set
#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> s = {1,2,3,4,5};
    if(s.find(3) != s.end())
        cout << "Found";
    else
        cout << "Not Found";
}