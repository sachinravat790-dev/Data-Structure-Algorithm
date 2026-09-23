// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter th size:";
//     cin>>n;
//     cout<<"enter the elemets:";
//     int arr[n];
//     for(int i=0; i<n; i++)
//     cin>>arr[i];
    
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]==arr[i+1])
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter th size:";
//     cin>>n;
//     cout<<"enter the elemets:";
//     int arr[n];
//     for(int i=0; i<n; i++)
//     cin>>arr[i];

//     //traversal
//     for(int i=n-1; i>=0; i--)
//     {
//         cout<<arr[i]<<" ";
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter th size:";
    cin>>n;
    cout<<"enter the elemets:";
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)

        {
            if(arr[i]<arr[j])
            {
                cout<<arr[i]<<" ";
            
            }
        }
        
    }
}