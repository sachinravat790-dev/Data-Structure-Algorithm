#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter the element:";
    
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int count=0;

    for(int i=1; i<n-1; i++)
    {
     if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
     {
        count++;
     }
    }
    
     cout<<count;

}
