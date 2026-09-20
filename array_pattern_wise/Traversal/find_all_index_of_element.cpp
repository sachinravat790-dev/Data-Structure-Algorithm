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
    
     int num;
    cout<<"enter the number:";
    cin>>num;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            cout<<i<<",";
        }
    }
    return 0;
    cout<<"invalid element not present";
}