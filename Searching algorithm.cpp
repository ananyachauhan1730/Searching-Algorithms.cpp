#include <iostream>
using namespace std;

// Linear / Sequential Search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; // return index
    }
    return -1;
}

// Binary Search (for sorted arrays)
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int n, key, choice;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    cout << "\nChoose Searching Method:\n1. Linear/Sequential\n2. Binary\nChoice: ";
    cin >> choice;

    int result;
    if (choice == 1) {
        result = linearSearch(arr, n, key);
    } else {
        result = binarySearch(arr, n, key);
    }

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}
