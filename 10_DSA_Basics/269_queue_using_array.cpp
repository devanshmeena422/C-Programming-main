// Question: Implement Queue using Array
#include <iostream>
using namespace std;
int main() {
    int queue[5];
    int front = 0, rear = -1;
    queue[++rear] = 10;
    queue[++rear] = 20;
    queue[++rear] = 30;
    cout << queue[front];
}