 #include<iostream>
 #include <climits> // integer limit provide karta ha 
 using namespace std;
 int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter the elements:";
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    int maxi=INT_MIN;

    for(int i=0; i<n-1; i++)
    {
        for(int j=1+i; j<n; j++)
        {
          maxi=max(maxi,arr[j] - arr[i]);
        }
    }
    cout<<maxi;
 }
