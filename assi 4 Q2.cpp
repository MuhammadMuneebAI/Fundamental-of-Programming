#include <iostream>
#include <algorithm>
using namespace std;

void sort(int arr[], int size) {
    // Sort the array in descending order using std::sort and a custom comparator
    std::sort(arr, arr + size, std::greater<int>());
}

void display(int arr[], int size) {
    cout << "Sorted array elements in descending order: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Maximum element: " << arr[0] << endl;
    cout << "Minimum element: " << arr[size - 1] << endl;
}

int main() {
    const int size = 5;
    int arr[size];

    cout << "Enter 5 integer elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    sort(arr, size);
    display(arr, size);

    return 0;
}

