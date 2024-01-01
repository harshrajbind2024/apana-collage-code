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

node *contructBST(int preOrder[],int *preordeerIDX,int key,int min,int max,int n){
    if(*preordeerIDX>=n){
        return NULL;
    }
    node *root=NULL;
    if(key>min && key<max){
        root=new node(key);
        *preordeerIDX=*preordeerIDX+1;
        if(*preordeerIDX<n){
            root->left=contructBST(preOrder,preordeerIDX,preOrder[*preordeerIDX],min,key,n);
        }
        if(*preordeerIDX<n){
            root->right=contructBST(preOrder,preordeerIDX,preOrder[*preordeerIDX],key ,max,n);
        }

    }
    return root;

}

void printpreOder(node *root){
    if(root==NULL) {
        return ;
    }

    cout<<root->data<<" ";
    printpreOder(root->left);
    printpreOder(root->right);
}

int main()
{  
  int preOrder[]={10,2,1,13,11};
  int n=5;
  int preordeerIDX=0;

  node *root=  contructBST(preOrder,&preordeerIDX, preOrder[0],INT_MIN, INT_MAX, n);
  printpreOder(root);
}
