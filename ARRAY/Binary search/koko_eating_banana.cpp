#include<iostream>
using namespace std;
int main(){
    int ans,mid;
    int arr[4]={3,6,11,7};
    int speed=8;
    int start=3;
    int end=11;
    
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(mid>speed)
        mid=mid-1;

        else if(start<mid<=speed)
        {
            ans=mid;

            
        }

    }
    cout<<ans;
}