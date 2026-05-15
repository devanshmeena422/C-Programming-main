// Question: Count vowels using function
#include <iostream>
using namespace std;
int vowelCount(string str) {
    int count = 0;
    for(int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }
    return count;
}
int main() {
    string str;
    cin >> str;
    cout << vowelCount(str);
}