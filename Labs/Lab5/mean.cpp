#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

void print_median(vector<int>& arr) {
    int n = arr.size();
    double median;
    if (n % 2 == 0) {
        median = (arr[n/2] + arr[n/2-1]) / 2.0;
    } else {
        median = arr[n/2];
    }
    cout << fixed << setprecision(1) << "Median      " << median << endl;
}

void update_median(int x, vector<int>& arr) {
    arr.push_back(x);
    int n = arr.size();
    int j = n - 1;
    while (j > 0 && arr[j-1] > arr[j]) {
        swap(arr[j-1], arr[j]);
        j--;
    }
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n-1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    print_median(arr);
}

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cout << "Sorted      ";
        update_median(x, arr);
    }
    return 0;
}



