#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter the elements:";
    int arr[n];
    for(int i=0; i<=n-1; i++)
    cin>>arr[i];
    int target; 
    cout<<"enter the target elements:";
    cin>>target;
    int start=0;
    int end=n-1;
    int ans;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            ans=mid;
            break; 
        }
        //left sorted
        else if(arr[mid]>=arr[0])
        {
            if(arr[start]<=target && arr[mid]>=target)
            {
                end=mid-1;
            }
            else
            start=mid+1;
        }
        //right sorted
        else
        {
            if(arr[mid]<=target && arr[end]>=target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
    }
    if(ans==-1)
    {
        cout<<"not found element";
    }
    else{
        cout<<ans;
    }

}