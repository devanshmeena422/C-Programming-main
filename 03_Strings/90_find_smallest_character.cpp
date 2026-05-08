// Question: Find smallest character in string
#include <iostream>
using namespace std;
int main() {
    string str;
    cin >> str;
    char min = str[0];
    for(int i = 1; i < str.length(); i++) {
        if(str[i] < min)
            min = str[i];
    }
    cout << min;
}