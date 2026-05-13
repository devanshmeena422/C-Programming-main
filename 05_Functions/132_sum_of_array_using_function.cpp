// Question: Find sum of array using function
#include <iostream>
using namespace std;
int arraySum(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}
int main() {
    int arr[5] = {1,2,3,4,5};
    cout << arraySum(arr, 5);
}