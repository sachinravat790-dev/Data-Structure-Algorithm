#include <iostream>
#include <algorithm>
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

    // Sort array
    sort(arr, arr + n);

    int left = 0;
    int right = 1;

    while (right < n) {
        if (arr[left] != arr[right]) {
            left++;
            arr[left] = arr[right];
        }

        right++;
    }

    cout << "Array after removing duplicates: ";

    for (int i = 0; i <= left; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}