//   m-2  run
// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

class QNode {
   public:
	int data;
	QNode* next;

	QNode(int d)
	{
		data = d;
		next = NULL;
	}
};

class Queue {
	public:
	QNode *front, *rear;
	
	Queue() { front = rear = NULL; }

	void enQueue(int x)
	{

		// Create a new LL node
		QNode* temp = new QNode(x);

		// If queue is empty, then
		// new node is front and rear both
		if (rear == NULL) {
			front = rear = temp;
			return;
		}

		// Add the new node at
		// the end of queue and change rear
		rear->next = temp;
		rear = temp;
	}

	// Function to remove
	// a key from given queue q
	void deQueue()
	{
		// If queue is empty, return NULL.
		if (front == NULL)
			return;

		// Store previous front and
		// move front one node ahead
		QNode* temp = front;
		front = front->next;

		// If front becomes NULL, then
		// change rear also as NULL
		if (front == NULL)
			rear = NULL;

		delete (temp);
	}
};

// Driver code
int main()
{

	Queue q;
	q.enQueue(10);
	q.enQueue(20);
	q.deQueue();
	q.deQueue();
	q.enQueue(30);
	q.enQueue(40);
	q.enQueue(50);
	q.deQueue();
	cout << "Queue Front : " << ((q.front != NULL) ? (q.front)->data : -1)<< endl;
	cout << "Queue Rear : " << ((q.rear != NULL) ? (q.rear)->data : -1);
}
// This code is contributed by rathbhupendra





//   m-1  error
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

class queue{
     
     node *front;
	 node *back;

	public:
	
	   
	     queue(){
		   
           front=NULL;
		   back=NULL;
	     }

	   void enqueue(int x){
		  node *n=new node(x);
		  if(front==NULL){
			back=n;
			front=n;			
			return ;
		  }
		  back->next=n;
		  back=n;
	   }

	  void dequeue(){
		if(front==NULL){
			cout<<" np element in queue";
			return ;
		}
		node *del=front;
		front=front->next;
		delete del;
	  } 
     
	 int peek(){
		if(front==NULL){
			cout<<" np element in queue";
			return ;
		}
		return front->data;
	 }

	 bool empty(){
		if(front==NULL){			
			return true;
		}
		return false;
	 }

};


int main(){
	queue q;
}
