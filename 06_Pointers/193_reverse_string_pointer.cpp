// Question: Reverse string using pointer
#include <iostream>
using namespace std;
int main() {
    char str[] = "Hello";
    char *ptr = str;
    int len = 0;
    while(*(ptr + len) != '\0')
        len++;
    for(int i = len - 1; i >= 0; i--)
        cout << *(ptr + i);
}