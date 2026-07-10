#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter the elements:";
    int arr[n];
     for(int i=0; i<n; i++)
     cin>>arr[i];
     int start=0;
      int end=n-1;
        //segregate problem
      while(start<=end)
    {
      if(arr[start]==0)
        start++;

        else{
            if(arr[end]==0)
            {
                swap(arr[start],arr[end]);
                start++,end--;
            }
            else{
                end --;
            }
            
        }
    }
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
}