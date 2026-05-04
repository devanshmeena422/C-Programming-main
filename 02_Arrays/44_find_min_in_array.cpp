// Question: Find minimum element in array
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {10,5,20,8,15};
    int min = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] < min)
            min = arr[i];
    }
    cout << min;
}