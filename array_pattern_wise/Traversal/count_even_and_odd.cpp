#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;

    //user input take
    cout<<"enter the size:";
    cin>>n;

    cout<<"enter the elements:";
    int arr[n];

    for(int i=0; i<n; i++)
    cin>>arr[i];

    int even=0;
    int odd=0;
    //count even and odd
    for(int i=0; i<n; i++)
    {   
        
        if(arr[i]%2==0)
        {
            even++;
        }

        else{
            odd++;
        }
    }
         cout<<"even:"<<even<<endl;
         cout<<"odd:"<<odd<<endl;
}