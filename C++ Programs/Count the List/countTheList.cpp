//PLEASE DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.

#include <iostream>
using namespace std;

class Node {  
    public:            
        int data; 
        Node* next;
};    

class LinkedList {  
  public:
        Node *head;         
        LinkedList()  {
            head = NULL; 
        }
        void append(int);
        void display();
        int countTheKey(int);
};

void LinkedList :: append(int value)  {
    //Write your code here
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void LinkedList :: display() {
    //Write your code here
    if (head == NULL) {
        cout << "The list is empty." << endl;
    } else {
        Node* current = head;
        cout << "The list is: ";
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
}
        
int LinkedList :: countTheKey(int key) {
    //Write your code here
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        if (current->data == key) {
            count++;
        }
        current = current->next;
    }
    return count;
}
    
int main() {
    cout << "\nEnter the size of the list: ";
    int N, value, key;
    LinkedList lst;
    cin >> N;
    if (N > 0) {
        for (int i = 0; i < N; i++) {
            cin >> value;
            lst.append(value);
        }
        cout << endl;
        lst.display();
        cout << "\nEnter the number: ";
        cin >> key;

        //Write your code here
        int count = lst.countTheKey(key);
        cout << key << " occurs " << count << " times." << endl;
    } else {
        cout << "\nInvalid Input";
    }

    return 0;
}
