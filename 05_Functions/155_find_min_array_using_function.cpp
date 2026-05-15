// Question: Find minimum element in array using function
#include <iostream>
using namespace std;
int minArray(int arr[], int n) {
    int min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}
int main() {
    int arr[5] = {10,20,5,40,15};
    cout << minArray(arr, 5);
}