// Question: Find largest element in array using pointer
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {5,10,25,8,15};
    int *ptr = arr;
    int max = *ptr;
    for(int i = 1; i < 5; i++) {
        if(*(ptr + i) > max)
            max = *(ptr + i);
    }
    cout << max;
}