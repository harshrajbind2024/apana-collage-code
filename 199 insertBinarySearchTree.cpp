//    run

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

node *insertBST(node *root,int x){
    if(root==NULL){
       return new node(x);
    }
    if(x<root->data){
        root->left=insertBST(root->left,x);
    }else{
        root->right=insertBST(root->right,x);
    }
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
    // struct node *root = new node(1); wrong
    
    // node *root=NULL;    wrong
    // insertBST(root,1);
    // insertBST(root,2);
    // insertBST(root,8);
    // insertBST(root,3);
    


    node *root=NULL;
    root=insertBST(root,1);
    insertBST(root,2);
    insertBST(root,8);
    insertBST(root,3);


    inOrder(root); 



    return 0;
}
