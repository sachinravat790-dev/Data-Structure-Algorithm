#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements:";
    for(int i=0;i<n; i++)
    cin>>arr[i];
    // increasing order sort
    for(int i=0; i<n-1; i++)
    {
        int index =i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
            index= j;
        }
        swap(arr[i] ,arr[index]);
    }
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}
