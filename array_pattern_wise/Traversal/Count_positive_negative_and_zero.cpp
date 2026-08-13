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

    int zero=0;
    int positive=0;
    int negative=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }

        else if(arr[i]>0)
        {
            positive++;
        }

        else{
            negative++;
        }
    }
    cout<<"negative:"<<negative<<endl;
    cout<<"positive:"<<positive<<endl;
    cout<<"zero:"<<zero<<endl;
}