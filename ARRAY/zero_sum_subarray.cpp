// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//     cout<<"enter the size:";
//     cin>>n;
//     // zero sum subarray sum ko count kar raha ha ki kitna bar sum =0 aayaa hja
//     cout<<"enter the elements:";
//     int arr[n];

//     for(int i=0; i<n; i++)
//     cin>>arr[i];

//     int count =0;
//      for(int i=0; i<n; i++)
//      {
//         int sum=0;
//         for(int j=i; j<n; j++)
//         {
//             sum+=arr[j];
//             if(sum==0)
//             count++;
//         }
//      }
//      cout<<count;
// }


// 2nd method       
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    // zero sum subarray sum ko count kar raha ha ki kitna bar sum =0 aayaa hja
    cout<<"enter the elements:";
    int arr[n];

    for(int i=0; i<n; i++)
    cin>>arr[i];
    unordered_map<long long int,long long int>m;
    long long int prefixSum=0;
    m[0]=1;
    int total=0;
    for(int i=0;i<n; i++)
    {
        
        prefixSum+=arr[i];
        if(m.count(prefixSum))
        {
            total+=m[prefixSum];
        }
        else
        m[prefixSum]=1;
    }
        cout<<total;
}