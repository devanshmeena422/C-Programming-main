// Question: Find second largest element in array
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {10,20,30,40,50};
    int max = 0, second = 0;
    for(int i = 0; i < 5; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    for(int i = 0; i < 5; i++) {
        if(arr[i] > second && arr[i] != max)
            second = arr[i];
    }
    cout << second;
}