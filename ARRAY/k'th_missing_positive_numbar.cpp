#include<iostream>
using namespace std;
int main(){
    int n,k;
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter the elements:";
    int arr[n];
    for(int i=0; i<=n-1; i++)
    cin>>arr[i];
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]-mid-1>=k)
        {
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout<<ans;
}