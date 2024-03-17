#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

// Function to print array elements
void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
}

// Driver Code
int main()
{

    int arr[] = { 60, 10, 80, 40, 30,
                  20, 50, 90, 70 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // To sort the array in decreasing order
    // use greater <int>() as an third arguments
    sort(arr, arr + 9, greater<int>());

    // Print array elements
    printArray(arr, n);

    return 0;
}
