#include<iostream>
using namespace std;
int main(){
            int n,target;
   cout<<"enter the size:";
   cin>>n;
   cout<<"enter the element:";
   int arr[n];
   for(int i=0; i<n; i++)
   cin>>arr[i];
   cout<<"target element:";
   cin>>target;
        //two sum
        bool found =false;
        int start=0 ,end=n-1;
    while(start<end)
    {
        if(arr[start]+arr[end]==target)
        {
            cout<<"target found";
            found=true;
            break;
        }
        else if(arr[start]+arr[end]<target)
        {
            start++;
        }
        else{
            end --;
        }
    }
    if(!found)
    {
        cout<<"target not found";
    }
   

}