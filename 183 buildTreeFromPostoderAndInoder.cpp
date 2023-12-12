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

node *buildTree(int postOrder[],int inOrder[],int start, int end){
    static int index=4;
    node *nodeData;

    if(start>end){
        return NULL;
    }

    int val=postOrder[index];
    index--;
    nodeData=new node(val);

    if(start==end){
        return nodeData;
    }

    int pos=search(inOrder,start,end,val);

    // wrong --- becouse depend order
    // nodeData->left=buildTree(postOrder,inOrder,start,pos-1); 
    // nodeData->right=buildTree(postOrder,inOrder,pos+1,end);
    
    nodeData->right=buildTree(postOrder,inOrder,pos+1,end);
    nodeData->left=buildTree(postOrder,inOrder,start,pos-1);
    
    
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

    int postOrder[]={4,2,5,3,1};
    int inOrder[]={4,2,1,5,3};

    node *root=buildTree(postOrder,inOrder,0,4);

    inOrderprint(root);

    return 0;
}