// Question: Copy string using pointers
#include <iostream>
using namespace std;
int main() {
    char str[] = "Hello";
    char copy[20];
    char *p1 = str;
    char *p2 = copy;
    while(*p1 != '\0') {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';
    cout << copy;
}