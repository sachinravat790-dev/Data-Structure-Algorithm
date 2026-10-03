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
    
    int start=0;
    int end=start+1;
    while(start<n && end<n)
    {
        if(arr[start]==0 && arr[end]!=0)
        {
            swap(arr[start],arr[end]);
            start++;
            end++;
        }

        else if (arr[start] == 0 && arr[end] == 0)
        {
            end++;
        }
        else{
            start++;
            end++;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ,";
    }

    
}