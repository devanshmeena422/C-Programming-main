// Question: Compare two strings using pointers
#include <iostream>
using namespace std;
int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char *p1 = str1;
    char *p2 = str2;
    bool equal = true;
    while(*p1 != '\0' || *p2 != '\0') {
        if(*p1 != *p2) {
            equal = false;
            break;
        }
        p1++;
        p2++;
    }
    if(equal)
        cout << "Equal";
    else
        cout << "Not Equal";
}