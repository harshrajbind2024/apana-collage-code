//     run

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left,*right;
    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    } 

};

node *sortedArrsyToBST(int arr[],int start,int end){
    //   if(start>=end){     wrong

    if(start>end){
        return NULL;
    }
    int mid=(start+end)/2;
    node *root=new node(arr[mid]);
    root->left=sortedArrsyToBST(arr,start,mid-1);
    root->right=sortedArrsyToBST(arr,mid+1,end);
     return root;       
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
    int arr[]={1,2,3,4,5};
    node *root=sortedArrsyToBST(arr,0,4);

    preOrder(root);
}