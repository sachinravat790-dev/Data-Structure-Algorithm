#include<iostream>
using namespace std;
int main(){
    int n;
    int max=INT_MIN;
    int result=0;

    //user input take
    cout<<"enter the size:";
    cin>>n;

    cout<<"enter the elements:";
    int arr[n];

    for(int i=0; i<n; i++)
    cin>>arr[i];

    int largest=0;
    int secondlargest=0;

    for(int i=0; i<n; i++)
    {

        // Agar current element largest se bada hai
        if(arr[i]>largest)
        {
             // Purana largest second largest ban jayega
            secondlargest=largest;

            // Current element new largest ban jayega
            largest=arr[i];
        }

        // Agar current element largest se chhota
        // but secondLargest se bada hai

        else if(arr[i]>secondlargest && arr[i]<largest)
        {
            secondlargest=arr[i];
        }
    }
    cout<<"secondlargest:"<<secondlargest;
   
}