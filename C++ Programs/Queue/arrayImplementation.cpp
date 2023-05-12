#include <iostream>
using namespace std;

#define MAX 10

class Queue {
  int front, rear;
  int arr[MAX];

public:
  Queue() {
    front = rear = -1;
  }

  void enQueue(int item) {
    if (rear == MAX - 1) {
      cout << "\nQueue overflow";
      return;
    }

    if (front == -1 && rear == -1) {
      front = rear = 0;
    } else {
      rear++;
    }

    arr[rear] = item;
    cout << "\nItem inserted " << item;
  }

  void deQueue() {
    int item;
    if (rear == -1) {
      cout << "\nQueue underflow";
      return;
    }

    item = arr[front];
    if (front == rear) {
      front = rear = -1;
    } else {
      front++;
    }

    cout << "\nItem deleted " << item;
  }
};

int main() {
  Queue q;
  q.enQueue(1);
  q.enQueue(2);
  q.enQueue(3);
  q.deQueue();
  q.deQueue();
  q.deQueue();
  q.deQueue();

  return 0;
}
