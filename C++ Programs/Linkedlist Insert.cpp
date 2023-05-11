#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node* next;
};

class LinkedList {
public:
  Node *head, *tail;

  LinkedList() {
    head = NULL;
    tail = NULL;
  }

  void insertNodeAtFront(int value) {
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
      head = newNode;
      tail = newNode;
    } else {
      newNode->next = head;
      head = newNode;
    }
  }

  void printList() {
    Node *current = head;
    while (current != NULL) {
      cout << current->data << " ";
      current = current->next;
    }
    cout << endl;
  }
};

int main() {
  LinkedList Ist;
  Ist.insertNodeAtFront(40);
  Ist.insertNodeAtFront(30);
  Ist.insertNodeAtFront(20);
  Ist.insertNodeAtFront(10);

  Ist.printList();

  return 0;
}
