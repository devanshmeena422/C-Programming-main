// Question: Remove duplicate elements (print unique)
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1,2,2,3,4};
    for(int i = 0; i < 5; i++) {
        bool unique = true;
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j])
                unique = false;
        }
        if(unique)
            cout << arr[i] << " ";
    }
}