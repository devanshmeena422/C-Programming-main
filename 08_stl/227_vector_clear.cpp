// Question: Clear all vector elements
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {1,2,3};
    v.clear();
    cout << v.size();
}