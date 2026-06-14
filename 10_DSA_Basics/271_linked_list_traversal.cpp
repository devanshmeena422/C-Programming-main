// Question: Traverse a linked list
#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
};
int main() {
    Node* first = new Node();
    Node* second = new Node();
    first->data = 10;
    second->data = 20;
    first->next = second;
    second->next = NULL;
    Node* temp = first;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}