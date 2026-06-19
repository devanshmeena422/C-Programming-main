// Question: Find unique element in array
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1,2,1,2,5};
    int result = 0;
    for(int i = 0; i < 5; i++)
        result ^= arr[i];
    cout << result;
}