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
    
    int MinValue=INT_MAX;
    int MaxValue=INT_MIN;
    int difference=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>MaxValue)
        {
            MaxValue=arr[i];
        }

        if(arr[i]<MinValue)
        {
              MinValue=arr[i];
        }
    }
        cout<<"differemce:"<<MaxValue-MinValue<<endl;
    
}