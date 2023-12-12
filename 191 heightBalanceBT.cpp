//  run 
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int x){
        data=x;
        left=NULL;
        right =NULL;
    }

};
int height(struct node *root){
    if(root==NULL){
       return 0;
    }
    int left_length=height(root->left);
    int right_length=height(root->right);
    return max(left_length,right_length)+1;
}


bool isbalance(struct node *root){
    if(root==NULL){
        return true;
    }
    if(isbalance(root->left)==false){
        return false;
    }
    if(isbalance(root->right)==false){
        return false;
    }
    int left_length=height(root->left);
    int right_length=height(root->right);
    if(abs(left_length-right_length)<=1){
        return true;
    }
    else{
        return false;
    }
}



int main(){
    struct node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->left->left=new node(6);
    root->left->left->left->left=new node(7);
    
    //  if(isbalance){       wrong
    
    if(isbalance(root)){
        cout<<" balance ";
    }else{
        cout<<" not balance";
    }

}