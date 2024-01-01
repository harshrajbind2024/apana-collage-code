//  run
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void flotten(node *root){
    if(root==NULL||(root->left==NULL&&root->right==NULL)){
        return ;
    }

    if(root->left!=NULL){
        flotten(root->left);
        node *temp=root->right;
        root->right=root->left;
        root->left=NULL;
        node *tail=root->right;  
        while(tail->right!=NULL){
            tail=tail->right;
        }      
        tail->right=temp;
    }
    flotten(root->right);
}

void inOrder(struct node * root){
    if(root==NULL) {
        return ;
    }
     inOrder(root->left);
    cout<<root->data<<" ";
   
    inOrder(root->right);
}

int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

     inOrder(root);

     cout<<endl;
     flotten(root);
    inOrder(root);

    return 0;
}
