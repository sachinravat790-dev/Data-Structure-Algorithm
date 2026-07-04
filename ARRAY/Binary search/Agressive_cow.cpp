#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int mid, ans = -1, n;
    int cow;

    cout << "Enter the size: ";
    cin >> n;

    cout << "Enter the elements: ";
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sort the array
    sort(arr, arr + n);

    cout << "Enter the number of cows: ";
    cin >> cow;

    int start = 1;
    int end = arr[n - 1] - arr[0];

    while(start <= end)
    {
        mid = start + (end - start) / 2;

        int count = 1;
        int position = arr[0];

        // Check if cows can be placed
        for(int i = 1; i < n; i++)
        {
            if(position + mid <= arr[i])
            {
                count++;
                position = arr[i];
            }
        }

        if(count < cow)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }

    cout << "Maximum minimum distance = " << ans;

    return 0;
}