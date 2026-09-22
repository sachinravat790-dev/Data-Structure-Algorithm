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

      int maxcount=0;
      int maxelement=arr[n-1];
    for(int i = 0; i < n; i++) {

        int count = 0;

        // poora array traverse
        for(int j = 0; j < n; j++) {
            if(arr[i]== arr[j]) {
                count++;
            }
        }
          if(maxcount<count)
          {
            maxcount=count;
            maxelement=arr[i];
          }
    }
    cout<<"maximum element:"<<maxelement<<endl;
    cout<<maxcount;
    return 0;

}