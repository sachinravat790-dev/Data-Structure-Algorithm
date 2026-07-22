#include<iostream>
using namespace std;
int main(){
    int n;
    int ans=0;
    cout<<"enter the size:";
    cin>>n;

    cout<<"enter the elements:";
    int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

         //xor method 
    for(int i=0; i<n; i++)
    {
        ans =ans^ arr[i];
    }
    cout<<ans;

}