#include <iostream>
#include <chrono> // for measuring time
#include <iomanip> // include the iomanip header for setprecision

using namespace std;
using namespace std::chrono;

class Node {
    public:
        int data;
        Node* next;
        Node(int x) {
            data = x;
            next = nullptr;
        }
};

class StackLinkedList {
    private:
        Node* head;
        Node* top;
    public:
        StackLinkedList() {
            head = nullptr;
            top = nullptr;
        }
        ~StackLinkedList() {
            Node* temp = head;
            while(temp != nullptr) {
                head = head->next;
                delete temp;
                temp = head;
            }
        }
        void push(int x) {
            Node* newNode = new Node(x);
            if(head == nullptr) {
                head = newNode;
                top = newNode;
            } else {
                top->next = newNode;
                top = newNode;
            }
        }
        int pop() {
            if(head == nullptr) {
                cout << "Stack Underflow" << endl;
                return -1;
            } else {
                int x = top->data;
                if(head == top) {
                    head = nullptr;
                    top = nullptr;
                } else {
                    Node* temp = head;
                    while(temp->next != top) {
                        temp = temp->next;
                    }
                    top = temp;
                    top->next = nullptr;
                }
                            return x;
        }
    }
    void display() {
        cout << "Stack: ";
        Node* temp = head;
        while(temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    StackLinkedList s;
    auto start = high_resolution_clock::now(); // start measuring time
    s.push(8);
    s.push(10);
    s.push(5);
    s.push(11);
    s.push(15);
    s.push(23);
    s.push(6);
    s.push(18);
    s.push(20);
    s.push(17);
    auto stop = high_resolution_clock::now(); // stop measuring time
    auto duration = duration_cast<nanoseconds>(stop - start);
    double seconds = duration.count();
    cout << "Time taken for pushing elements using StackLinkedList: " << fixed << setprecision(3) << seconds << "nanoseconds" << endl;
    s.display();
    for(int i=0; i<5; i++) {
        s.pop();
    }
    s.display();
    s.push(4);
    s.push(30);
    s.push(3);
    s.push(1);
    s.display();
    return 0;
}
               

