// Question: Find shortest word in a string
#include <iostream>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    string word = "", shortest = "";
    bool first = true;
    for(int i = 0; i <= str.length(); i++) {
        if(str[i] == ' ' || str[i] == '\0') {
            if(first || word.length() < shortest.length()) {
                shortest = word;
                first = false;
            }
            word = "";
        }
        else
            word += str[i];
    }
    cout << shortest;
}