// Question: Insert elements into multiset
#include <iostream>
#include <set>
using namespace std;
int main() {
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(20);
    for(auto x : ms)
        cout << x << " ";
}