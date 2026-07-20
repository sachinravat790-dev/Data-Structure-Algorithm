#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;

    cout<<"enter the elements:";
    int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    int prefix[n];

    prefix[0]=arr[0];

    for(int i=1; i<n; i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }

    cout<<"prefix sum array:";

    for(int i=0; i<n; i++)
    {
        cout<<prefix[i] <<" ";
    }
    return 0;
}