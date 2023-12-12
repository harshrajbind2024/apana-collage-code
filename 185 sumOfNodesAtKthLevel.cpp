//   m-2  run

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;

    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }

};


void sumOfNodesAtKthLevel( struct node *root ,int k){

    if(root==NULL){
        return ;
    }

    queue<node*>q;
    q.push(root);
    q.push(NULL);

    int level=0;
    int sum=0;
     
    while(!q.empty()){
        node *curr_front=q.front();
        q.pop();

        if(curr_front!=NULL){
             
             if(k==level){
                sum +=curr_front->data;
             }
          

            if(curr_front->left){
                q.push(curr_front->left);
            }
            if(curr_front->right){
                q.push(curr_front->right);
            }
        }
        else if (!q.empty()){
            q.push(NULL);
            level++;
        }
  
  
        
    }

    cout<<sum;

}


int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right= new node(3);
    root->left->left=new node(4);
    root->left->right= new node(5);
    
     root->right->left=new node(6);
      root->right->right=new node(7);

      int k=2;

      sumOfNodesAtKthLevel(root,k);

}






//  m-1 run
// sum Of All Nodes
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;

    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }

};


void sumOfAllNodes( struct node *root){

    if(root==NULL){
        return ;
    }

    queue<node*>q;
    q.push(root);
    q.push(NULL);


    int sum=0;
     
    while(!q.empty()){
        node *curr_front=q.front();
        q.pop();

        if(curr_front!=NULL){
             
         
                sum +=curr_front->data;
             
          

            if(curr_front->left){
                q.push(curr_front->left);
            }
            if(curr_front->right){
                q.push(curr_front->right);
            }
        }
        else if (!q.empty()){
            q.push(NULL);
           
        }
  
  
        
    }

    cout<<sum;

}


int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right= new node(3);
    root->left->left=new node(4);
    root->left->right= new node(5);
    
     root->right->left=new node(6);
      root->right->right=new node(7);



      sumOfAllNodes(root);

}