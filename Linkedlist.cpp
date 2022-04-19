#include<bits/stdc++.h>
using namespace std;

 class node
 {
     public:
     int data;
     node *next;


 };
 void printvalue(node *head)
 {
     while(head!=NULL)
     {
         cout<<head->data<<endl;
        head=  head->next;
     }

 }
int main()
{

    node *head=NULL;
    node *second=NULL;
    node *third =NULL;
     head= new node();
     second=new node();
     third=new node();
     head->data=1;
     head->next=second;
     second->data=2;
     second->next=third;
     third->data=3;
     third->next=NULL;
     printvalue(head);

}
