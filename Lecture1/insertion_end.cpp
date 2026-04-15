#include<iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next=NULL;
    }
};

int main()
{
    Node * Head, *tail;
    tail=Head=NULL;

    int arr[5]={4,6,1,9,8};

    // insert at the value

    for(int i=0; i<5; i++)
    {
        if(Head==NULL)
        {
            Head= new Node(arr[i]);
            tail=Head;
        }
        else{
            tail->next=new Node(arr[i]);
            tail=tail->next;
        }
    }

    Node *temp;
    temp=Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}