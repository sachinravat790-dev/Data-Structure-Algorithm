#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;

    //user input take
    cout<<"enter the size:";
    cin>>n;

    cout<<"enter the elements:";
    int arr[n];

    for(int i=0; i<n; i++)
    cin>>arr[i];

    int found;
    cout<<"enter the found:";
    cin>>found;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==found)
        {
            cout<<"present element at index:"<<i;
        }
    }
}
