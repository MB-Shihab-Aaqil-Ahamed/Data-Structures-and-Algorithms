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
