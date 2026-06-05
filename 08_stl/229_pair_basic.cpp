// Question: Store values using pair
#include <iostream>
#include <utility>
using namespace std;
int main() {
    pair<int,string> p;
    p.first = 1;
    p.second = "One";
    cout << p.first << " " << p.second;
}