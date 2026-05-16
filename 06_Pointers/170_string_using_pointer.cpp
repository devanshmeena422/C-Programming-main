// Question: Print string using pointer
#include <iostream>
using namespace std;
int main() {
    char str[] = "Hello";
    char *ptr = str;
    while(*ptr != '\0') {
        cout << *ptr;
        ptr++;
    }
}