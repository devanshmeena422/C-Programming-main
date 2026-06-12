// Question: Search an element using Binary Search
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {10,20,30,40,50};
    int key = 30;
    int low = 0, high = 4;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key) {
            cout << "Found";
            return 0;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout << "Not Found";
}