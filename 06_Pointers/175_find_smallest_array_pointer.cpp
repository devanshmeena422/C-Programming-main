// Question: Find smallest element in array using pointer
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {5,10,25,8,1};
    int *ptr = arr;
    int min = *ptr;
    for(int i = 1; i < 5; i++) {
        if(*(ptr + i) < min)
            min = *(ptr + i);
    }
    cout << min;
}