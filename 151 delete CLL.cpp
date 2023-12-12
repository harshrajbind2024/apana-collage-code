

#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

void deleteAtHead(node *head){
    node *temp=head;
    while(temp->next!=head){
        temp=temp->next;

    }
    node *toDel=head;
    temp->next=head->next;
    head=head->next;
    delete toDel;
    
}


void deletion(node *head,int pos){

    if(pos==1){
        deleteAtHead(head);
        return ;
    }
    node *temp=head;
    int count=1;
    while(count!=pos-1){
        temp=temp->next;
        count++;
    }
    node *todel=temp->next;
    temp->next=temp->next->next;
    delete todel;

}



void print(node *head)
{
    if (head == NULL)
        return;

    cout << head->data << " ";

    for (node *p = head->next; p != head; p = p->next)
    {
        cout << p->data << " ";
    }
}



int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = head;

    print(head);
    cout << endl;
    
    deletion(head,3);
    print(head);

}
