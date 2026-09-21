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
        if(arr[i]<arr[i+1])
        {
            cout<<arr[i+1];
            return 0;
        }
    }
    cout<<"not greater than any element";
}