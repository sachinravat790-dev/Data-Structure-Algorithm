#include<iostream>
using namespace std;
int main(){
    int n;
    int max=INT_MIN;
    int result=0;

    //user input take
    cout<<"enter the size:";
    cin>>n;

    cout<<"enter the elements:";
    int arr[n];

    for(int i=0; i<n; i++)
    cin>>arr[i];

    // maximum find
    for(int i=0; i<n; i++){
        if(arr[i]>result)
        {
            result=arr[i];
        }
    }
    cout<<result;
    
}