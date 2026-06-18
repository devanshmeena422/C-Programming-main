// Question: Find minimum element using recursion
#include <iostream>
using namespace std;
int minimum(int arr[], int n) {
    if(n == 1)
        return arr[0];
    int minValue = minimum(arr, n - 1);
    return arr[n - 1] < minValue ? arr[n - 1] : minValue;
}
int main() {
    int arr[5] = {5,10,25,1,15};
    cout << minimum(arr, 5);
}