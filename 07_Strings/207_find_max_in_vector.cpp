// Question: Find maximum element in vector
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {10,25,5,40,15};
    int max = v[0];
    for(int i = 1; i < v.size(); i++) {
        if(v[i] > max)
            max = v[i];
    }
    cout << max;
}