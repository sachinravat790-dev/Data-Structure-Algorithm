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

    bool sorted=true;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]<arr[i+1])
       {
         sorted=false;
       }
           
    }
   if(sorted)
   {
    cout<<"array is sorted";
   }
   else{
    cout<<"array not sorted";
   }

        
}