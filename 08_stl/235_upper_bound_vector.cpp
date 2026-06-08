// Question: Find upper bound in vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v = {1,2,4,4,5};
    cout << upper_bound(v.begin(), v.end(), 4) - v.begin();
}