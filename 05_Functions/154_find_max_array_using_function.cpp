// Question: Find maximum element in array using function
#include <iostream>
using namespace std;
int maxArray(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main() {
    int arr[5] = {10,20,5,40,15};
    cout << maxArray(arr, 5);
}