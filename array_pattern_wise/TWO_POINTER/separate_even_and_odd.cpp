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
    int i=0;
    int j=1+i;
  

    while(j<n)
    {
        if(arr[i]%2!=0 && arr[j]%2==0)
        {

            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else if(arr[i]%2==0)
        {
            i++;
            if(i==j){
            j++;
            }
        }
        else{
            j++;
        }
    }
    for(int k=0; k<n; k++)
    {
    
        cout<<arr[k]<<"  ";
    }

}