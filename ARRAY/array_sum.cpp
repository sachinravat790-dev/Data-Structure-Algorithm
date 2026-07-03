#include<iostream>
using namespace std;
int main(){
    // Question 1 Take 20 elements from users input and find its sum with help
    int n,sum=0;
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter the elements:";
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    for(int i=0; i<n; i++)
       sum=sum+arr[i];
    {
    cout<<sum<<" ";
    }
}