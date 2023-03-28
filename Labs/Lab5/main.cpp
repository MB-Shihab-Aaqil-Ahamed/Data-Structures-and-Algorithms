#include <iostream>
#include <algorithm>
#include <chrono>
#include <stack>
#include <random>
#include <iomanip>

using namespace std;

// Recursive Quick Sort Algorithm
void quick_sort_recursive(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++)
        {
            if (arr[j] <= pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);

        int pivot_index = i + 1;

        quick_sort_recursive(arr, low, pivot_index - 1);
        quick_sort_recursive(arr, pivot_index + 1, high);
    }
}

// Non-Recursive Quick Sort Algorithm
void quick_sort_non_recursive(int arr[], int low, int high)
{
    stack<int> stk;
    stk.push(low);
    stk.push(high);

    while (!stk.empty())
    {
        int high = stk.top();
        stk.pop();
        int low = stk.top();
        stk.pop();

        if (low < high)
        {
            int pivot = arr[high];
            int i = low - 1;
            for (int j = low; j < high; j++)
            {
                if (arr[j] <= pivot)
                {
                    i++;
                    swap(arr[i], arr[j]);
                }
            }
            swap(arr[i + 1], arr[high]);

            int pivot_index = i + 1;

            stk.push(low);
            stk.push(pivot_index - 1);
            stk.push(pivot_index + 1);
            stk.push(high);
        }
    }
}

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);

    int arr_lengths[] = { 3, 5, 7, 15, 20 };
    for (int i = 0; i < 5; i++)
    {
        int n = arr_lengths[i];
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            arr[j] = dis(gen);
        }

        cout << "total elements in array: " << n << endl;

        auto start = chrono::high_resolution_clock::now();
        quick_sort_recursive(arr, 0, n - 1);
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double> time_taken = end - start;
        cout << "Recursive Quick Sort algorithm:\n";
        cout << "time taken is " << fixed << setprecision(6) << time_taken.count() * 1000000 << " seconds\n";

        start = chrono::high_resolution_clock::now();
        quick_sort_non_recursive(arr, 0, n - 1);
        end = chrono::high_resolution_clock::now();
        time_taken = end - start;
        cout << "Non-recursive Quick Sort algorithm:\n";
        cout << "time taken is " << fixed << setprecision(6) << time_taken.count() * 1000000 << " seconds\n";

        cout << endl;
    }

    return 0;
}