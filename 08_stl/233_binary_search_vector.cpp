// Question: Perform binary search on vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v = {1,2,3,4,5};
    if(binary_search(v.begin(), v.end(), 4))
        cout << "Found";
}