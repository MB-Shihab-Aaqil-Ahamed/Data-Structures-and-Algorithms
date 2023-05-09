#include <iostream>
#include <string>
using namespace std;

// Linked List node
struct Node{
    string key;
    string value;
    Node* next;
    Node(string k, string v){
        key = k;
        value = v;
        next = NULL;
    }
};

// Linked List data structure
struct LinkedList{
    Node* head;
    int length;

    LinkedList(){
        head = NULL;
        length = 0;
    }

    void insert(string key, string value){
        Node* new_node = new Node(key, value);
        new_node->next = head;
        head = new_node;
        length++;
    }

    void print_list(){
        Node* current = head;
        while (current != NULL) {
            cout << "(" << current->key << "," << current->value << ") --> ";
            current = current->next;
        }
        cout << "NULL\n";
    }
};

// Hash Table data structure
struct HashTable{
    int MAX_LENGTH = 4;
    int MAX_CHAIN_LENGTH = 2;
    LinkedList * password = new LinkedList[MAX_LENGTH];

    bool isFull(){
        bool full = true;
        for (int i = 0; i < MAX_LENGTH; i++){
            if(password[i].head == NULL){
                full = false;
            }
        }
        return full;
    }

    int hashfunc(string user_name){
        int sum = 0;
        for(int i = 0;i< user_name.length(); i++){
            sum += int(user_name[i]);
        }
        int hash = sum % MAX_LENGTH;
        return hash;
    }

    bool is_slot_empty(int hash){
        if(password[hash].head==NULL){
            return true;
        }
        return false;
    }

    void insert(string user_name,string user_password){
        int hash = hashfunc(user_name);
        if (password[hash].length >= MAX_CHAIN_LENGTH) {
            cout<<"Linked List reached MAX CAP!\n";
            return;
        }
        password[hash].insert(user_name, user_password);
    }

    void print_hashtable(){
        for(int i=0;i<MAX_LENGTH;i++){
            cout<<"["<<i<<"]-->";
            password[i].print_list();
        }
    }

    void hash_lookup(string user_name){
        int hash = hashfunc(user_name);
        if (is_slot_empty(hash)) {
            cout << "Username not found in hash table.\n";
            return;
        }
        Node* current = password[hash].head;
        while (current != NULL) {
            if (current->key == user_name) {
                cout << "Username: " << user_name << "\n";
                cout << "Password: " << current->value << "\n";
                return;
            }
            current = current->next;
        }
        cout << "Username not found in hash table.\n";
    }
};

int main(){
    HashTable * hashtbl = new HashTable;
    cout<< hashtbl->isFull()<<"\n";
    int command=0;
    string user_name;
    string password;
    while (command!=-1){
        /* code */
        cout << "Type command: ";
        cin >> command;
        switch (command){
        case 1:
            /* insert the new item*/
            cout << "Enter user name: ";
            cin >> user_name;
            cout << "Enter password to be saved: ";
            cin >> password;
            hashtbl->insert(user_name,password);
            break;
        case 2:
            /* hash lookup password*/
            cout << "Enter user name to look up password:";
            cin >> user_name;
            hashtbl->hash_lookup(user_name);
            break;
        case 3:
            hashtbl->print_hashtable();
            break;
        case -1:
            /* hash lookup password*/
            hashtbl->print_hashtable();
            cout << "Exiting...\n";
            break;
        
        }
    
    }
    return 0;
}
