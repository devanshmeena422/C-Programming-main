// Question: Find string length using function
#include <iostream>
using namespace std;
int stringLength(string str) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
        count++;
    return count;
}
int main() {
    string str;
    cin >> str;
    cout << stringLength(str);
}