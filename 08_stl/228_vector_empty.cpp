// Question: Check whether vector is empty
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    if(v.empty())
        cout << "Empty";
    else
        cout << "Not Empty";
}