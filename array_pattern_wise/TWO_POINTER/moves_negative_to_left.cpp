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

    int left=0;
    int right=1;

    while(right<n)
    {
        if(arr[left]<0 && arr[right]<0)
        {
            left++;
            right++;
        }
        else if(arr[left]<=0 && arr[right]>=0)
        {
            left++;
            right++;
        }
        else if(arr[left]>=0 && arr[right]<=0)
        {
            swap(arr[left],arr[right]);
        }
        else if(arr[left]>0 && arr[right]>0)
        {
            right++;
        }
        else if(arr[left]==0 && arr[right]<0)
        {
            swap(arr[left], arr[right]);
        }
        else if(arr[left]==0 && arr[right]==0 ||arr[right]>0)
        {
            right++;
        }
        
    }
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}