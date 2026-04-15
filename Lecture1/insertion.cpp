// #include<iostream>
// using namespace std;

// // basic node creation
// class Node
// {
//     public:
//     int data;
//     Node *next;

//     Node(int value)
//     {
//         data=value;
//         next=NULL;
//     }
// };
// int main(){
//     Node *Head;
//     Head= new Node(4);

//     cout<<Head->data<<endl;
//     cout<<Head->next<<endl;
// }


// //insert the node at beginning
// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;
    
//         Node(int value) 
//         {
//             data=value;
//             next=NULL;
//         }
// };
// int main()
// {
//     Node *Head;
//     Head =NULL; 


//     int arr[]={2,9,4,5,6,7};

//     for(int i=0; i<6; i++)

//     {
//         if(Head==NULL)
//         {
//             Head=new Node(arr[i]);
//         }

//         // linked list exist karti ha 
//         else{
//             Node *temp;
//             temp =new Node(arr[i]);
//             temp->next=Head;
//             Head=temp;

//         }
//     }

//     // print the value
//     Node *temp=Head;

//     while(temp!=NULL)
//     {
//     cout<<temp->data;
//     temp=temp->next;
//     };
// }



// // question 2
// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int value)
//     {
//         data =value;
//         next=NULL;
//     }
// };
 
// int main()
// {
//     Node*Head;
//     Head =NULL;
//     int n;
//     // take from users to input
//     cout<<"enter the size:";
//     cin>>n;
//     cout<<"enter the elements:";
    
//     int arr[n];
//     for(int i=0; i<n; i++)
//     cin>>arr[i];

//     for(int i=0; i<n;i++)
//     {
//     if(Head==NULL)
//     {
//         Head=new Node(arr[i]);
//     }

//     else{
//         Node *temp;
//         temp=new Node(arr[i]);
//         temp->next=Head;
//         Head=temp;
//     }
// }

// // value print
//   Node *temp =Head;
//   while(temp!=NULL)
//   {
//     cout<<temp->data;
//     temp=temp->next;
//   }
// }




//  //. insert at beginning elements
//  #include<iostream>
//  using namespace std;


// struct Node{
//     public:
//     int data;
//     Node *next;
//     Node(int value)
//     {
//         data=value;
//         next=NULL;
//     }

// };

// int main(){
//     Node *Head;
//     Head=NULL;

//  int arr[5]={2,7,4,1,6};
//  for(int i=0;i<5;i++)
// {   
//  if(Head==NULL)
//  {
//  Head=new Node(arr[i]);
//  }

//  else {
//     Node *temp;
//     temp=new Node(arr[i]);
//     temp->next=Head;
//     Head=temp;
//  }
// }

// // insert at 10 
// Node *temp=new Node(10);
// temp->next=Head;
// Head= temp;


// while(temp!=NULL)
// {
//     cout<<temp->data<<" ";
//     temp=temp->next;
// }
// }








// create a node
#include<iostream>
using namespace std;


struct Node{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data=value;
        next= NULL;
    }
};

int main()
{
    // direct node creation 
    Node *Head=new Node(10);
    Node *Head2=new Node(23);
    Node *Head3=new Node(76);
    Node *Head4=new Node(65);
    Node *Head5=new Node(46);


    // linking
    Head->next=Head2;
    Head2->next=Head3;
    Head3->next=Head4;
    Head3->next=Head5;

   Node *temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}