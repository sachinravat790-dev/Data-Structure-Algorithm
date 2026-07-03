#include<iostream>
using namespace std ;
int main(){
   // reverse array
   int n; 
   cout<<"enter the size:";
   cin>>n;
   int arr[n];
   cout<<"enter the elements:";
   for(int i=0; i<n; i++)
   cin>>arr[i];

   int start=0; 
   int end=n-1;
   while(start<end)
   {
      swap(arr[start],arr[end]);
      start++;
      end--;
   }
   for(int i=0; i<n; i++)
   {
      cout<<arr[i]<<" ";
   }
}