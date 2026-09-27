#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;

    cout<<"enteer the element:";
    
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int target;
    cout<<"enter the number:";
    cin>>target;

    // sort array
    sort(arr, arr + n);

    int left=0;
     int right=n-1;

    while(left<right)
    {
        if(arr[left]+arr[right]==target-1)
        {
            cout<<arr[left]<<","<<arr[right]<<endl;
            left++;
            right--;
            
        }
        else if(arr[left]+arr[right]<target){
            left++;
        }
        else{
            right--;
        }
    
}
}
