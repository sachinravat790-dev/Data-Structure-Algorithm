#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter the size: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {

        int start = 0;
        int end = 1;

        while (end < n - i) {

            if (arr[start] > arr[end]) {
                swap(arr[start], arr[end]);
            }

            start++;
            end++;
        }
    }


    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}