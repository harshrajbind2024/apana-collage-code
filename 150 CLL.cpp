
// 10.27 insertathhead and 10.28 insertathtail gfg
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};

node *insertathhead(node *head,int x){
    node *temp=new node(x);
    if(head==NULL){
        temp->next=temp;
    }
    else{
        node *curr=head;
        while (curr->next!=head)
        {
           curr=curr->next;
        }
        curr->next=temp;
        temp->next=head;
        
    }
    return temp;

}

void print(node *head){
    if(head==NULL) return;

    cout<<head->data<<" ";

    for(node *p=head->next;p!=head;p=p->next){
           cout<<p->data<<" ";
    }

}

int main(){
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=head;

    print(head);
    cout<<endl;
    
    head=insertathhead(head,50);
    print(head);

    
}







//   m-2 run
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};

node *insertAtEnd(node *head,int x){
    node *temp=new node(x);
    if(head==NULL){
        temp->next=temp;
         return temp;
    }
    else{
        node *curr=head;
        while (curr->next!=head)
        {
           curr=curr->next;
        }
        curr->next=temp;
        temp->next=head;
        return head;
    }
   

}

void print(node *head){
    if(head==NULL) return;

    cout<<head->data<<" ";

    for(node *p=head->next;p!=head;p=p->next){
           cout<<p->data<<" ";
    }

}

int main(){
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=head;

    print(head);
    cout<<endl;
    
    head=insertAtEnd(head,50);
    print(head);

    
}

