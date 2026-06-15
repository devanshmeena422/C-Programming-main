// Question: Merge two sorted arrays
#include <iostream>
using namespace std;
int main() {
    int a[3] = {1,3,5};
    int b[3] = {2,4,6};
    int c[6];
    int k = 0;
    for(int i = 0; i < 3; i++)
        c[k++] = a[i];
    for(int i = 0; i < 3; i++)
        c[k++] = b[i];
    for(int i = 0; i < 6; i++)
        cout << c[i] << " ";
}