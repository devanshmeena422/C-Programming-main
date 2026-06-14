// Question: Count nodes in linked list
#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
};
int main() {
    Node a, b, c;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    int count = 0;
    Node* temp = &a;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    cout << count;
}add count nodes