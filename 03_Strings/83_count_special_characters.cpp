// Question: Count special characters in a string
#include <iostream>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    int count = 0;
    for(int i = 0; i < str.length(); i++) {
        if(!isalnum(str[i]) && str[i] != ' ')
            count++;
    }
    cout << count;
}