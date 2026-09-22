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

    for(int i = 0; i < n; i++) {

        int count = 0;

        // poora array traverse
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        // agar sirf 1 baar mila
        if(count == 1) {
            cout << arr[i] << " ";
        }
    }

    return 0;

}