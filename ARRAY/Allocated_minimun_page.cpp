#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {10,20,30,67,90};
    int student = 2;

    int start = 90;
    int end = 217;

    int mid, ans = -1;

    while(start <= end)
    {
        mid = start + (end - start) / 2;

        int page = 0;
        int count = 1;

        for(int i = 0; i < 5; i++)
        {
            if(page + arr[i] <= mid)
            {
                page += arr[i];
            }
            else
            {
                count++;
                page = arr[i];
            }
        }

        if(count <= student)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    cout << ans;
}