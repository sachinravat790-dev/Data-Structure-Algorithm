#include<iostream>
using namespace std;
int main(){
    int n;

    //user input take
    cout<<"enter the size:";
    cin>>n;

    cout<<"enter the elements:";
    int arr[n];

    for(int i=0; i<n; i++)
    cin>>arr[i];

    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<endl;
        }
    }
}