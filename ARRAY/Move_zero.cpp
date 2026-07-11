#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[8]={2,4,0,4,0,5,0,6};
    int k=0;
    //moves zero
    
        //traverse element  store non zero element
        for(int i=0; i<8; i++)
        {
           if(arr[i]!=0)
           {
            arr[k]=arr[i];
                k++;
           }
        }
        // store remaning element 
        while(k<8)
        {
            arr[k]=0;
                k++;
        }

    for(int i=0; i<8; i++)
    {
        cout<<arr[i]<<" ";
    }
}