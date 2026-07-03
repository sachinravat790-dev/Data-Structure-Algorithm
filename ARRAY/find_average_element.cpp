#include<iostream>
using namespace std;
int main(){
    // find the average value
    int n,sum=0,average;
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter the element:";
    int arr[n];
    for(int i=0;i<n; i++)
    cin>>arr[i];
    for(int i=0; i<n; i++)
    {
    sum=sum+arr[i];
    }
    average=sum/n;
    {
     cout<<average<<" ";
    }
}