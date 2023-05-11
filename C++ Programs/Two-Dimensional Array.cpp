#include <iostream>
using namespace std;

int main() {
  int arr[3][2];

  cout << "Enter the elements of array:\n";
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 2; col++) {
      cin >> arr[row][col];
    }
  }

  cout << "Elements in the array are:\n";
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 2; col++) {
      cout << arr[row][col] << " ";
    }
    cout << endl;
  }

  return 0;
}
