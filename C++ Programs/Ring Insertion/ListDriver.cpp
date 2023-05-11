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
        Node *head,*tail;         
        LinkedList()  {
            head = NULL;
            tail = NULL;
        }
        void insertAtFront(int);
        void display();
        
};

void LinkedList:: insertAtFront(int value)  {
    //Write your code here
    
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    
    if (tail == NULL) { 
        tail = head; 
    }
    
}
        
void LinkedList:: display(){
    
    //Write your code here
    
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    
}
        
int main() {
    char choice;
    int value;
    LinkedList rod;
    do{
        cout<<"\nEnter the ring number:\n";
        cin>>value;
        
        
        //Write your code here
        rod.insertAtFront(value);
        
        cout<<"Do you want to add another ring? Enter y/n \n";
        cin>>choice;
            
    }while(choice=='y');
    cout<<"The ring numbers in the rod are: \n";
    
    
    //Write your code here
    rod.display();
    
    return 0;
}
