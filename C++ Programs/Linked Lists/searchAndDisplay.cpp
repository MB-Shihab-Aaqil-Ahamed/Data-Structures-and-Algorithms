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
