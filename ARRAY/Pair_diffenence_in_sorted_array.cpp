#include<iostream>
using namespace std;
int main(){
    int n,target;
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter the elements:";
    int arr[n];
    for(int i=0;i<n; i++)
    cin>>arr[i];
    cout<<"target:";
    cin>>target;
    int start=0,end=1;
    while(end<n)
    {
        if(arr[end]-arr[start]==target)
        {
            cout<<arr[start]<<" "<<arr[end];
            return 0;
        }
        else if(arr[end]-arr[start]<target)
            end++;

        else{
            start++;
            
            // start aur end same na ho
            if(start ==end)
            end++;
        }
    }
    cout<<"not present element";
    

}