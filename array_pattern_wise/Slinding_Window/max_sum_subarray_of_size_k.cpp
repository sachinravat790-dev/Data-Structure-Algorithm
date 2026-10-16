#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cout<<"enter the window size:";
    cin>>k;
    int sum=0;
     int maxi=INT_MIN;
    int i=0; 
    int j=0;
    
     while(j<n)
     {
        sum =sum+arr[j];

        if(j-i+1<k)
        {
            j++;
        }
        else if( j-i+1==k)
        {
            maxi=max(maxi,sum);

            sum =sum-arr[i];
            i++;
            j++;
        }
    }
     
    cout<<maxi;
     
}