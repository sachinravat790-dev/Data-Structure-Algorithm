#include<iostream>
using namespace std;
int main(){
    string str="madam";

    int start=0; 
    int end=str.length()-1;

    while(start<end)
    {
        if(str[start]!=str[end])
        {
            cout<<"not palindrom";
            return 0;
        }
        start++;
        end--;
    }
    cout<<"pallidrone";
}