// Question: Take 5 elements as input and print them
#include <iostream>
using namespace std;
int main() {
    int arr[5];
    for(int i = 0; i < 5; i++)
        cin >> arr[i];
    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}