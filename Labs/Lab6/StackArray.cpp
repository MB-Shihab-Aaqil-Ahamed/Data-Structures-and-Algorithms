#include <iostream>
#include <chrono> // for measuring time
#include <iomanip> // include the iomanip header for setprecision

using namespace std;
using namespace std::chrono;

class StackArray {
    private:
        int* arr;
        int top;
        int size;
    public:
        StackArray(int s) {
            size = s;
            arr = new int[size];
            top = -1;
        }
        ~StackArray() {
            delete[] arr;
        }
        void push(int x) {
            if(top >= size-1) {
                cout << "Stack Overflow" << endl;
            } else {
                top++;
                arr[top] = x;
            }
        }
        int pop() {
            if(top < 0) {
                cout << "Stack Underflow" << endl;
                return -1;
            } else {
                int x = arr[top];
                top--;
                return x;
            }
        }
        void display() {
            cout << "Stack: ";
            for(int i=0; i<=top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main() {
    StackArray s(10);
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
    cout << "Time taken for pushing elements using StackArray: " << fixed << setprecision(3) << seconds << "nanoseconds" << endl;
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
