//  run

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


int search(int inOrder[],int start,int end,int curr){
      for(int i=start;i<=end;i++){
        if(inOrder[i]==curr){
            return i;
        }
      }
    return -1;
}

node *buildTree(int preOrder[],int inOrder[],int start, int end){
    static int index=0;
    node *nodeData;

    if(start>end){
        return NULL;
    }

    int curr=preOrder[index];
    index++;
    nodeData=new node(curr);

    if(start==end){
        return nodeData;
    }

    int pos=search(inOrder,start,end,curr);

    nodeData->left=buildTree(preOrder,inOrder,start,pos-1);
    nodeData->right=buildTree(preOrder,inOrder,pos+1,end);
    return nodeData;         
}


void inOrderprint(struct node * root){
    if(root==NULL) {
        return ;
    }   
    
    inOrderprint(root->left);
    cout<<root->data<<" ";
    inOrderprint(root->right);
}


int main(){

    int preOrder[]={1,2,4,3,5};
    int inOrder[]={4,2,1,5,3};

    node *root=buildTree(preOrder,inOrder,0,4);

    inOrderprint(root);

    return 0;
}