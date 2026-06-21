// Question: Find union of two arrays
#include <iostream>
using namespace std;
int main() {
    int a[3] = {1,2,3};
    int b[3] = {3,4,5};
    for(int i = 0; i < 3; i++)
        cout << a[i] << " ";
    for(int i = 0; i < 3; i++) {
        bool found = false;
        for(int j = 0; j < 3; j++) {
            if(b[i] == a[j])
                found = true;
        }
        if(!found)
            cout << b[i] << " ";
    }
}