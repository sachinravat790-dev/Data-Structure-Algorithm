#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;

    //user input take
    cout<<"enter the size:";
    cin>>n;

    cout<<"enter the elements:";
    int arr[n];

    for(int i=0; i<n; i++)
    cin>>arr[i];

    int x;
    cout<<"enter the x:";
    cin>>x;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>x)
        
        count++;
    }
    cout<<count;
}