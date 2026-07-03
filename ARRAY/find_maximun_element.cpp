#include<iostream>
using namespace std;
int main(){
    // Question 3 find maximum element
    int arr[6];
    for(int i=0;i<6;i++)
    cin>>arr[i];
    int result =INT_MIN;
    for(int i=0;i<6;i++)
    if(arr[i]>result)
    result=arr[i];
    {
        cout<<result<<" ";
    }
}