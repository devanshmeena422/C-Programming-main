// Question: Sort characters of string using STL
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string str = "programming";
    sort(str.begin(), str.end());
    cout << str;
}