// run

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


int heightOfBT( struct node *root){
    if(root==NULL){
        return 0;
    }
    int left_height=heightOfBT(root->left);
    int right_height=heightOfBT(root->right);
    return max(left_height,right_height)+1;

}


int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right= new node(3);
    root->left->left=new node(4);
    root->left->right= new node(5);
    
     root->right->left=new node(6);
      root->right->right=new node(7);



    cout<<heightOfBT(root);

}