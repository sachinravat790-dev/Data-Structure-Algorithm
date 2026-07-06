#include<iostream>
using namespace std;
int main(){
   // Question 10 rotate elements clock wise
   int n;
   cout<<"enter the size:";
   cin>>n;
   cout<<"enter the elements:";
    int arr[n];
     for(int i=0; i<n; i++)
     cin>>arr[i];
     int last = arr[n-1];    // fist store last element 


         // second se shift kareng
    for(int i=n-1; i>0; i--)

        {
                 arr[i]=arr[i-1];
        }

   // insert at fist
        arr[0]=last;
   
   for(int i=0; i<n; i++)
        {
              cout<<arr[i]<<" ";
        }
}