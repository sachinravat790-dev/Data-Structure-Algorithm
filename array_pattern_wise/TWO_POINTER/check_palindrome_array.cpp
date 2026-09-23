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

    int start=0;
    int end=n-1;
    
    while(start<end)
    {
        if(arr[start]!=arr[end])

        {
            cout<<" not palindrone";
            return 0;
        }
        start++;
        end--;
       
    
    }
       cout<<" palindrone";
  
}