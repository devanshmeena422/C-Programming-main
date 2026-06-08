// Question: Find minimum element using STL
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v = {5,10,25,15};
    cout << *min_element(v.begin(), v.end());
}