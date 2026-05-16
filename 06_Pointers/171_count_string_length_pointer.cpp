// Question: Find string length using pointer
#include <iostream>
using namespace std;
int main() {
    char str[] = "Programming";
    char *ptr = str;
    int count = 0;
    while(*ptr != '\0') {
        count++;
        ptr++;
    }
    cout << count;
}