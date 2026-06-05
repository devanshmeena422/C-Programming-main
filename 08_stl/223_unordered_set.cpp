// Question: Store elements using unordered_set
#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    unordered_set<int> us = {10,20,30};
    for(auto x : us)
        cout << x << " ";
}