// Question: Find sum of odd elements in array
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1,2,3,4,5};
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 != 0)
            sum += arr[i];
    }
    cout << sum;
}