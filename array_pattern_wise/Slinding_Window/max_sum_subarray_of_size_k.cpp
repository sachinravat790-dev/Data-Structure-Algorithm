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
    cout<<"enter the size of k:";
    cin>>k;

    int i=0; 
    int j=0;
    int sum=0;
    int maxi = INT_MIN;

    while(j<n)
    {
        //current element ka sum
        sum = sum+arr[j];

        // window size smaller then k
        if(j-i+1<k)
        {
            j++;
        }

        else if(j-i+1==k)
        {
            maxi = max(maxi,sum);

            //remove left element
            sum = sum - arr[i];
            i++;
            j++;
        }
    }
    cout<<maxi;
}