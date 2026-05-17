// Question: Print even elements using pointer
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1,2,3,4,6};
    int *ptr = arr;
    for(int i = 0; i < 5; i++) {
        if(*(ptr + i) % 2 == 0)
            cout << *(ptr + i) << " ";
    }
}