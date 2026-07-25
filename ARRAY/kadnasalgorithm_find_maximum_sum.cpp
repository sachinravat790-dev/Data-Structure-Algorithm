#include<iostream>
using namespace std;
int main(){
    int n;
    // find maximun  sum in array
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter the elements:";
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int maxi=INT_MIN;
    int prefix=0;
    for(int i=0; i<n; i++)
    {
        prefix+=arr[i];
        maxi=max(maxi, prefix);

    if(prefix<0)
        prefix=0;
    }
    cout<<maxi;
}