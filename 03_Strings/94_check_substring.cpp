// Question: Check whether a substring exists
#include <iostream>
using namespace std;
int main() {
    string str, sub;
    cin >> str >> sub;
    if(str.find(sub) != string::npos)
        cout << "Found";
    else
        cout << "Not Found";
}