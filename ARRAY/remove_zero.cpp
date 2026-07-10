#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter the element:";
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    int k=0;
        // first shift  non zero element
        for(int i=0; i<n; i++)
        {
            if(arr[i]!=0)
            {
                arr[k]=arr[i];
                k++;
            }
        }
        // print only non zero element
        for(int i=0; i<k; i++)
        {
            cout<<arr[i]<<" ";
        }

}
