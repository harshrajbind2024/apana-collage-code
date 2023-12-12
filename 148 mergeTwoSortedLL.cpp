//   m-1 run

#include<bits/stdc++.h>
using namespace std;


class node{

    public:
      int data;
      node *next;

      node(int x){
        data=x;
        next=NULL;
      }

};

node *merge(node *head1,node *head2){
    node *p1=head1;
    node *p2=head2;
    node *dummyNOde=new node(-1);
    node *p3= dummyNOde;

    while(p1!=NULL && p2!=NULL){
        if(p1->data < p2->data){
            p3->next=p1;
            p1=p1->next;
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
       p3=p3->next;
    }

    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }

    while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }

    return dummyNOde->next;

}



void dislpay(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}


int main(){

     node *head1=new node(10);
     head1->next=new node(80);
     head1->next->next=new node(90);
     head1->next->next->next=new node(400);
     dislpay(head1);
     cout<<endl;

     node *head2=new node(1);
     head2->next=new node(70);
     head2->next->next=new node(89);
     head2->next->next->next=new node(200);  
     dislpay(head2);
      cout<<endl;

     node *newHead=merge(head1,head2);
     dislpay(newHead);
      cout<<endl;   
}