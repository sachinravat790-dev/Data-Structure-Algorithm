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

   
    for(int i=0; i<n-1; i++)
    {
        for(int j=1+i; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<"contains duplicate:"<<arr[i];
                return 0;
            }
        }
    }
    cout<<"not contains duplicate";
}