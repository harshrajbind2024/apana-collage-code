// m-1 wrong 
// infinity time run
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

void deleteAtHead(node *head){
 
    node *deleteData=head;
    head=head->next;
    delete deleteData;

}

void printList(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);


    printList(head);

    cout<<endl<<" ";

    deleteAtHead(head);

     printList(head);
    return 0;

}

// g++ a.cpp -o run 