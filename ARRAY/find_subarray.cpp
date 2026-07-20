#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"enter hte size:";
    cin>>n;

    cout<<"enter the elements:";
    int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    int start, end;
    cout<<"start:";
        cin>>start;
    cout<<"end:";
        cin>>end;
    //int size =end - start +1;

    //cout<<"size:"<<size;
    cout<<"subarray:";


    for(int i=start; i<=end; i++)
    {
        cout<<arr[i]<<" ";

    }
}
