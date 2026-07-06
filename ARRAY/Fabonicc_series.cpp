#include<iostream>
using namespace std;
int main(){
 //  calculate fabonicc series
   int n;
   cout<<"enter the numbers:";
   cin>>n;
   int arr[1000];
   // fist =0;
   //second =0;
   arr[0]= 0;
   arr[1]=1;

   for(int  i=2; i<=n-1; i++)
   arr[i]=arr[i-1]+arr[i-2];

   for(int i=0; i<n-1; i++)
   {
      cout<<arr[i]<<" ";
   }
   }

