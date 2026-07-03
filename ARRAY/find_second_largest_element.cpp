#include<iostream>
using namespace std;
int main(){
    //  second largest element find
    int n;
    cout<<"enter the size:";
    cin>>n;
    int arr[n];
    cout<<"enter the element:";
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int largest=arr[0];
    int secondlargest=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>largest)
        {
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest){
        secondlargest=arr[i];
        }
    }
    cout<<secondlargest;

}