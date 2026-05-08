// Question: Count lowercase letters in a string
#include <iostream>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    int count = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            count++;
    }
    cout << count;
}