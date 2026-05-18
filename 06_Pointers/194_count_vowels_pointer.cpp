// Question: Count vowels using pointer
#include <iostream>
using namespace std;
int main() {
    char str[] = "Education";
    char *ptr = str;
    int count = 0;
    while(*ptr != '\0') {
        char ch = tolower(*ptr);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
        ptr++;
    }
    cout << count;
}