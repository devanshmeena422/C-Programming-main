// Question: Search element in vector
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {10,20,30,40,50};
    int key = 30;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == key) {
            cout << "Found";
            return 0;
        }
    }
    cout << "Not Found";
}