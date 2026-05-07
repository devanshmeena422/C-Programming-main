// Question: Find frequency of a character in string
#include <iostream>
using namespace std;
int main() {
    string str;
    char ch;
    cin >> str >> ch;
    int count = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ch)
            count++;
    }
    cout << count;
}