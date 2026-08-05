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

    int k;
    cout<<"entert he fixed size:";
    cin>>k;

    int windowSum=0;
    int ans=INT_MIN;

    for(int i=0; i<k; i++)
    {
        // add current element
        windowSum+=arr[i];
    }

    // window slide karo 
    for(int i=k; i<n;i++ )
    {
        windowSum=windowSum - arr[i-k] + arr[i];
        ans= max(ans, windowSum);
    }

    cout<<ans;

   
}