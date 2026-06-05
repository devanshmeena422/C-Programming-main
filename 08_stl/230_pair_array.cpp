// Question: Store multiple pairs in array
#include <iostream>
#include <utility>
using namespace std;
int main() {
    pair<int,int> p[3];
    p[0] = {1,10};
    p[1] = {2,20};
    p[2] = {3,30};
    for(int i = 0; i < 3; i++)
        cout << p[i].first << " " << p[i].second << endl;
}