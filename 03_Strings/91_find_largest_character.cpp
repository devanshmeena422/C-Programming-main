// Question: Find largest character in string
#include <iostream>
using namespace std;
int main() {
    string str;
    cin >> str;
    char max = str[0];
    for(int i = 1; i < str.length(); i++) {
        if(str[i] > max)
            max = str[i];
    }
    cout << max;
}