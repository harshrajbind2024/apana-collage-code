//  m-1  run
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

node *mergerecursion(node *head1, node *head2)
{
    if (head1 == NULL)
    {
        return head2;
    }

    if (head2 == NULL)
    {
        return head1;
    }

    node *res;

    if (head1->data < head2->data)
    {
        // return head1;
        res = head1;
        res->next = mergerecursion(head1->next, head2);
    }
    else
    {
        // return head2;
        res = head2;
        res->next = mergerecursion(head1, head2->next);
    }
}

void dislpay(node *head)
{
    node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main()
{

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

     node *newHead=mergerecursion(head1,head2);
     dislpay(newHead);
      cout<<endl;
}