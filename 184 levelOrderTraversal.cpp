//   run

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


void pritnLeverOder( struct node *root){
    if(root==NULL){
        return ;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node *curr_front=q.front();
        q.pop();

        if(curr_front!=NULL){
            cout<<curr_front->data<<" ";
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

    //    error in terminal 
        //   else{
        //     q.push(NULL);
        // }
      
      
    }

}


int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right= new node(3);
    root->left->left=new node(4);
    root->left->right= new node(5);
    
     root->right->left=new node(6);
      root->right->right=new node(7);

      pritnLeverOder(root);

}