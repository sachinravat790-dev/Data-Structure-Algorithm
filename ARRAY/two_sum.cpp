#include<iostream>
using namespace std;
int main(){
    int n,target;
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter the elments:";
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    cout<<"enter the target:";
    cin>>target;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<i<<" ,"<<j;
                
            }
            
        }
    }
    cout<<" the target not found";
}
