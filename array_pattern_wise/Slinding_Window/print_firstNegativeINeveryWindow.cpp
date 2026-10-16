#include <iostream>
#include <deque>
#include <vector>
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
int i=0;
int j=0;
deque<int> q;// only  store negative element
vector<int> v; // store karenge windoie ka answer

while(j<n)
{
    // store only negative element
    if(arr[j]<0)
    {
        q.push_back(arr[j]);
    }
    // window small than k
    if(j-i+1<k)
    {
        j++;
    }
    
    else if(j-i+1==k){
        if(q.empty())
        {
            v.push_back(0);
        }
        else{
            v.push_back(q.front());
        }

        // remove element left side
        if(!q.empty() && arr[i]==q.front())
        {
            q.pop_front();
        }
        // slide window
        i++;
        j++;
    }
}
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }


}