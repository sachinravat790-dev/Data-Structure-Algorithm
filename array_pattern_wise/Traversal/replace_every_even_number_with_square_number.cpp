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

    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            arr[i]=arr[i]*arr[i];
        }
        cout<<arr[i]<<" ";
    }
}