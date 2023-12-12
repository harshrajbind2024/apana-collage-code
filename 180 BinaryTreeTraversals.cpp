//  m-2 run 
//  IN-order          similary post-order
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node * left;
    struct node *right;

    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
   
};


void inOrder(struct node * root){
    if(root==NULL) {
        return ;
    }

   
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}


int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right= new node(3);
    root->left->left=new node(4);
    root->left->right= new node(5);


    inOrder(root);

    return 0;
}


//   m-1 run
//  pre-order traersals
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node * left;
    struct node *right;

    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
   
};


void preOrder(struct node * root){
    if(root==NULL) {
        return ;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}


int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right= new node(3);
    root->left->left=new node(4);
    root->left->right= new node(5);


    preOrder(root);

    return 0;
}