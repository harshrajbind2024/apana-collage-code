//  run

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


int countAllNodes( struct node *root){
    if(root==NULL){
        return 0;
    }

     return countAllNodes(root->left)+countAllNodes(root->right)+1;

}


int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right= new node(3);
    root->left->left=new node(4);
    root->left->right= new node(5);
    
     root->right->left=new node(6);
      root->right->right=new node(7);



    cout<<countAllNodes(root);

}