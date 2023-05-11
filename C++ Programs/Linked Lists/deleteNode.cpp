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

  void insertNodeAtEnd(int value) {
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
      head = newNode;
      tail = newNode;
    } else {
      Node *current = head;
      while (current->next != NULL) {
        current = current->next;
      }
      current->next = newNode;
      tail = newNode;
    }
  }

  void insertAtPosition(int pos, int value) {
    Node *prev = NULL;
    Node *current = head;
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (pos < 1) {
      cout << "Position cannot be less than one.";
      return;
    }

    if (pos == 1) {
      newNode->next = head;
      head = newNode;
      return;
    }

    for (int i = 1; i < pos; i++) {
      prev = current;
      current = current->next;
      if (current == NULL) {
        cout << "Invalid position";
        return;
      }
    }

    prev->next = newNode;
    newNode->next = current;
  }

  void search(int value) {
    Node *current = head;
    while (current != NULL) {
      if (current->data == value) {
        cout << "Element " << value << " is found";
        return;
      }
      current = current->next;
    }
    cout << "Element " << value << " not found in the List";
  }

  void displayList() {
    Node *current = head;
    while (current != NULL) {
      cout << current->data << " ";
      current = current->next;
    }
    cout << endl;
  }

  void deleteNode(int value) {
    bool flag = false;
    Node *current = head;
    Node *previous = NULL;

    while (current != NULL) {
      if (current->data == value) {
        if (current == head) {
          head = current->next;
        } else {
          previous->next = current->next;
        }

        if (current == tail) {
          tail = previous;
        }

        free(current);
        flag = true;
        break;
      }

      previous = current;
      current = current->next;
    }

    if (!flag) {
      cout << "Element not found";
    }
  }
};

int main() {
  LinkedList Ist;

  Ist.insertNodeAtFront(10);
  Ist.insertNodeAtEnd(40);
  Ist.insertNodeAtEnd(50);
  Ist.insertAtPosition(2, 20);
  Ist.insertAtPosition(3, 30);
  Ist.search(30);
  Ist.deleteNode(30);
  Ist.displayList();

  return 0;
}
