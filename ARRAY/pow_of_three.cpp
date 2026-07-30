#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;

    if(n<=0)
    {
        cout<<"false";
        // return 0;
    }
    while(n%3==0)
    {
        n=n/3;
    }
   
        cout<<(n==1);
        
    
}