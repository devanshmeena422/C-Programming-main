// Question: Search element using recursion
#include <iostream>
using namespace std;
bool search(int arr[], int n, int key) {
    if(n == 0)
        return false;
    if(arr[n - 1] == key)
        return true;
    return search(arr, n - 1, key);
}
int main() {
    int arr[5] = {10,20,30,40,50};
    if(search(arr, 5, 40))
        cout << "Found";
    else
        cout << "Not Found";
}