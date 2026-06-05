// Question: Count occurrences in multiset
#include <iostream>
#include <set>
using namespace std;
int main() {
    multiset<int> ms = {10,10,20,30};
    cout << ms.count(10);
}