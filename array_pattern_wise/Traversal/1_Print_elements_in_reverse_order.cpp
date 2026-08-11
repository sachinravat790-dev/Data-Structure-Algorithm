#include<iostream>
using namespace std;
int main(){
    int n;

    //user input take
    cout<<"enter the size:";
    cin>>n;

    cout<<"enter the elements:";
    int arr[n];

    for(int i=0; i<n; i++)
    cin>>arr[i];

    //  reverse number
    for(int i=n-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
}