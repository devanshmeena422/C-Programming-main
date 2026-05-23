// Question: Find key in map
#include <iostream>
#include <map>
using namespace std;
int main() {
    map<int,string> m;
    m[1] = "One";
    m[2] = "Two";
    if(m.find(2) != m.end())
        cout << "Found";
    else
        cout << "Not Found";
}