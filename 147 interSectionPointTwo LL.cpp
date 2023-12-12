//    m-2 run
// C++ program to get intersection point of two linked list
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node {
public:
	int data;
	Node* next;
};

/* function to get the intersection point of two linked
lists head1 and head2 */
Node* getIntesectionNode(Node* head1, Node* head2)
{
	while (head2) {
		Node* temp = head1;
		while (temp) {
			// if both Nodes are same
			if (temp == head2)
				return head2;
			temp = temp->next;
		}
		head2 = head2->next;
	}
	// intersection is not present between the lists
	return NULL;
}

// Driver Code
int main()
{
	/*
		Create two linked lists

		1st 3->6->9->15->30
		2nd 10->15->30

		15 is the intersection point
	*/

	Node* newNode;

	// Addition of new nodes
	Node* head1 = new Node();
	head1->data = 10;

	Node* head2 = new Node();
	head2->data = 3;

	newNode = new Node();
	newNode->data = 6;
	head2->next = newNode;

	newNode = new Node();
	newNode->data = 9;
	head2->next->next = newNode;

	newNode = new Node();
	newNode->data = 15;
	head1->next = newNode;
	head2->next->next->next = newNode;

	newNode = new Node();
	newNode->data = 30;
	head1->next->next = newNode;

	head1->next->next->next = NULL;

	Node* intersectionPoint
		= getIntesectionNode(head1, head2);

	if (!intersectionPoint)
		cout << " No Intersection Point \n";
	else
		cout << "Intersection Point: "
			<< intersectionPoint->data << endl;
}

// This code is contributed by Tapesh(tapeshdua420)






//   m-1 error
#include<bits/stdc++.h>
using namespace std;

class node{
     public:
    int data;
    node *next;
    // public:
     node(int x){
        data=x;
        next=NULL;
     }
};

void intersect(node *head1,node *head2,int pos){
     node *temp1=head1;
     pos--;
     while(pos--){
        temp1=temp1->next;
     }

     node *temp2=head2;
    
     while(temp2->next!=NULL){
        temp2=temp2->next;
     }
     temp2->next=temp1;

}


int intersection(node *head1,node *head2){
	int l1=length(head1);
	int l2=length(head2);
	int d=0;
	node *ptr1;
	node *ptr2;
	if(l1>l2){
		d=l1-l2;
		ptr1=head1;
		ptr2=head2;
	}
	else{
		d=l2-l1;
		ptr1=head2;
		ptr2=head1;
	}
	while(d){
		if(ptr1==NULL){
			return -1;
		}
		ptr1=ptr1->next;
		d--;
	}
	while(ptr1==NULL&&ptr2==NULL){
		if(ptr1==ptr2){
			return ptr1->data;
		}
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
	return -1;

}



int length(node *head){
    int l=0;
    node *curr=head;
    while(curr!=NULL){
        l++;
        curr=curr->next;
    }
    return l;
    
}


void print(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    } 
}

int main(){
    node* head1=new node(1);
    head1->next=new node(2);
   head1->next->next=new node(3);
   head1->next->next->next=new node(4);
   head1->next->next->next->next=new node(5);

    node* head2=new node(11);
    head2->next=new node(22);
   head2->next->next=new node(33);

   intersect(head1,head2,10);


   print(head1);
   cout<<endl;

    print(head2);
   cout<<endl;

   cout<<intersection(head1,head2);
}