#include <iostream>
using namespace std;

int main() {
  int arr[50], n, idx;

  cout << "Enter the size of array: " << endl;
  cin >> n;

  cout << "Enter the elements of array: " << endl;
  for (idx = 0; idx < n; idx++) {
    cin >> arr[idx];
  }

  cout << "Array elements are: " << endl;
  for (idx = 0; idx < n; idx++) {
    cout << arr[idx] << " ";
  }

  cout << endl;

  return 0;
}
