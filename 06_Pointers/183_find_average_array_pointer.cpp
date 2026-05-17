// Question: Find average of array using pointer
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {2,4,6,8,10};
    int *ptr = arr;
    int sum = 0;
    for(int i = 0; i < 5; i++)
        sum += *(ptr + i);
    cout << sum / 5;
}