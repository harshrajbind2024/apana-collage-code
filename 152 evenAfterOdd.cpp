//   m-1 wrong


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


void evenAfterOdd(node *head){
    node *odd=head;
    node *even=head->next;
    node *evenstart=even;
    while(odd->next!=NULL&&even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
    if(odd->next!=NULL){
        even->next=NULL;
    }
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
    head->next->next->next->next =new node(50);
     head->next->next->next->next->next  =new node(60);

    print(head);
    cout << endl;

    evenAfterOdd(head);
    
     print(head);
      cout << endl;

    

}
