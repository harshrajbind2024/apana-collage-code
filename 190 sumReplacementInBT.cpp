//  run

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;

    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }

};

// wrong
// void preOrder(struct node *root){
//     cout<<root->data<<" ";
//     preOrder(root->left);
//     preOrder(root->right);
// }

void sumReplace(struct node *root){
    if(root==NULL){
        return ;
    }
    sumReplace(root->left);
    sumReplace(root->right);
    if(root->left!=NULL){
        root->data+=root->left->data;
    }
    if(root->right!=NULL){
        root->data+=root->right->data;
    }
        
}

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
    
     root->right->left=new node(6);
    root->right->right=new node(7);
    
    preOrder(root);
    cout<<endl;

    sumReplace(root);

    preOrder(root);

}