// run

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

bool searchInBST(node *root,int key){
   if(root==NULL){
    return false;
   }
   if(root->data==key){
    return true;
   }

   if(root->data>key){
    searchInBST(root->left,key);

   }else{
      searchInBST(root->right,key);
   }
}

int main()
{  
    node *root=NULL;
    root=insertBST(root,1);
    insertBST(root,2);
    insertBST(root,8);
    insertBST(root,3);
    insertBST(root,10);
    insertBST(root,5);

    int key=123;
    bool x= searchInBST(root,key);
    if(x){
        cout<<" 'key'exist in BST ";
    }else{
         cout<<" 'key' not exist in BST ";
    }

    return 0;
}
