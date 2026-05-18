// Question: Copy array using pointers
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1,2,3,4,5};
    int copy[5];
    int *p1 = arr;
    int *p2 = copy;
    for(int i = 0; i < 5; i++)
        *(p2 + i) = *(p1 + i);
    for(int i = 0; i < 5; i++)
        cout << copy[i] << " ";
}