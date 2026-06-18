// Question: Find maximum element using recursion
#include <iostream>
using namespace std;
int maximum(int arr[], int n) {
    if(n == 1)
        return arr[0];
    int maxValue = maximum(arr, n - 1);
    return arr[n - 1] > maxValue ? arr[n - 1] : maxValue;
}
int main() {
    int arr[5] = {5,10,25,8,15};
    cout << maximum(arr, 5);
}