#include<iostream>
using namespace std;
int main(){
 // find target element in array
    int n;
    cout<<"enter the size:"<<endl;
    cin>>n;
     int arr[n];
     cout<<"Enter The Elements:";
     for(int i=0;i<n;i++){
     cin>>arr[i];
     }
     int target;
     cout<<"Enter the target elements:";
     cin>>target;
      int index=-1;
      for(int i=0; i<n; i++)
      {
        if(arr[i]==target)
        {
            index=i;
            break;
        }
      }
      cout<<"index:"<<index;
    }