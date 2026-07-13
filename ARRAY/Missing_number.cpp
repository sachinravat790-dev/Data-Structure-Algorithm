#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    int sum = 0;

    cout << "Enter elements: ";
    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int expected = n*(n+1) / 2;

    cout << "Missing Number = " << expected - sum;

    return 0;
}