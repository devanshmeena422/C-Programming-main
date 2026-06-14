// Question: Perform Linear Search
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {10,20,30,40,50};
    int key = 40;
    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            cout << "Found";
            return 0;
        }
    }
    cout << "Not Found";
}