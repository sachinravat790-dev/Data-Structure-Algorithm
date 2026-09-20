#include<iostream>
#include<vector>
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
     int ans=-1;
    for(int i=n-1; i>=0; i++)
    {
      if(arr[i]==num)
      {
        ans=arr[i];
      }

    }
      if(ans!=-1)
      {
        cout<<ans;
      }
    else{
    cout<< "not present element";
    }

    
   
    
}