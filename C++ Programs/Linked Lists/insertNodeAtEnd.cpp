void insertNodeAtEnd(int value) {
  Node *newNode = new Node;
  newNode->data = value;
  newNode->next = NULL;

  if (head == NULL) {
    head = newNode;
    tail = newNode;
    return;
  }

  Node *current = head;
  while (current->next != NULL) {
    current = current->next;
  }

  current->next = newNode;
  tail = newNode;
}
