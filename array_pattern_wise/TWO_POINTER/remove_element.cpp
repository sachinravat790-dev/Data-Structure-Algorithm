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

    int element;
    cout<<"reomve element:";
    cin>>element;

    int start;
    while(start<n)
    {
        if(arr[start]!=element)
        {
            cout<<arr[start]<<" ,";
            
        }
        start++;
       
    }
}