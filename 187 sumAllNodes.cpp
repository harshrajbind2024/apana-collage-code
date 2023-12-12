
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


int sumAllNodes( struct node *root){
    if(root==NULL){
        return 0;
    }

     return sumAllNodes(root->left)+sumAllNodes(root->right)+root->data;

}


int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right= new node(3);
    root->left->left=new node(4);
    root->left->right= new node(5);
    
     root->right->left=new node(6);
      root->right->right=new node(7);



    cout<<sumAllNodes(root);

}