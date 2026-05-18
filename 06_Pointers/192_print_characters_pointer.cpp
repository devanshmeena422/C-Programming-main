// Question: Print characters using pointer
#include <iostream>
using namespace std;
int main() {
    char str[] = "Code";
    char *ptr = str;
    while(*ptr != '\0') {
        cout << *ptr << " ";
        ptr++;
    }
}