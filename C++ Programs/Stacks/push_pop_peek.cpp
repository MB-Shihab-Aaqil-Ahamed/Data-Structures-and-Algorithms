#define MAX 10

class Stack {
  int top;
  public:
  Stack() { top = -1; }

  void push(int item);
  int pop();
  int peek();

  int arr[MAX];
};

void Stack::push(int item) {
  if (top >= (MAX - 1)) {
    cout << "\nStack overflow";
  } else {
    arr[++top] = item;
    cout << "\n<< " << "Element added" << item;
  }
}#define MAX 10

class Stack {
  int top;
  public:
  Stack() { top = -1; }

  void push(int item);
  int pop();
  int peek();

  int arr[MAX];
};

void Stack::push(int item) {
  if (top >= (MAX - 1)) {
    cout << "\nStack overflow";
  } else {
    arr[++top] = item;
    cout << "\n<< " << "Element added" << item;
  }
}

int Stack::pop() {
  if (top < 0) {
    cout << "\nStack underflow";
    return -1;
  } else {
    int item = arr[top--];
    return item;
  }
}

int Stack::peek() {
  if (top < 0) {
    cout << "\nStack underflow";
    return -1;
  } else {
    int item = arr[top];
    return item;
  }
}

int Stack::pop() {
  if (top < 0) {
    cout << "\nStack underflow";
    return -1;
  } else {
    int item = arr[top--];
    return item;
  }
}

int Stack::peek() {
  if (top < 0) {
    cout << "\nStack underflow";
    return -1;
  } else {
    int item = arr[top];
    return item;
  }
}

int main() {
  Stack st;
  st.push(8);
  st.push(4);
  st.push(5);
  st.push(9);
  int value = st.pop();
  
  if (value != -1) {
    cout << "\nDeleted element: " << value;
  }
  int top = st.peek();
  if (top != -1) {
    cout << "\nTop element: " << top;
  }
  return 0;
}
