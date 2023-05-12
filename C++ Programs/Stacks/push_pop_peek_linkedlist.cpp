#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
};

class Stack {
public:
  Node *top;
  Stack() { top = NULL; }

  void push(int data) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = top;
    top = newNode;
  }

  void pop() {
    if (top == NULL) {
      cout << "Stack underflow" << endl;
      return;
    }

    Node *temp = top;
    top = top->next;
    delete temp;
  }

  int peek() {
    if (top == NULL) {
      cout << "\nStack underflow";
      return -1;
    }

    return top->data;
  }

  void display() {
    if (top == NULL) {
      cout << "Stack is empty" << endl;
      return;
    }

    Node *temp = top;
    while (temp != NULL) {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }
};

int main() {
  Stack stk;
  stk.push(30);
  stk.push(20);
  stk.push(50);
  stk.push(70);
  stk.display();

  cout << "\nTop value is: " << stk.peek() << endl;

  stk.pop();
  stk.display();

  return 0;
}
