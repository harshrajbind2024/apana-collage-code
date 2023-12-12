//   m-1
// 189  b
// wrong
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




int diameterOfBT( struct node *root,int height){
    if(root==NULL){
        height=0;
        return 0;
    }

    int left_height=0;
    int right_height=0;

    // int curr_diameter=left_height+right_height+1;

    int left_diameter=diameterOfBT(root->left,left_height);
    int right_diameter=diameterOfBT(root->right,right_height);
    
     int curr_diameter=left_height+right_height+1;

     height=max(left_height,right_height)+1;
    return   max( curr_diameter,max(left_diameter,right_diameter));

}


int main(){
    
    struct node* root=new node(1);
    root->left=new node(2);
    root->right= new node(3);
    root->left->left=new node(4);
    root->left->right= new node(5);
    
     root->right->left=new node(6);
      root->right->right=new node(7);

   int height=0;

    cout<<diameterOfBT(root,height);

}





// m-1 run

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

int diameterOfBT( struct node *root){
    if(root==NULL){
        return 0;
    }
    int left_height=heightOfBT(root->left);
    int right_height=heightOfBT(root->right);

    int curr_diameter=left_height+right_height+1;

    int left_diameter=diameterOfBT(root->left);
    int right_diameter=diameterOfBT(root->right);

    return   max( curr_diameter,max(left_diameter,right_diameter));

}


int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right= new node(3);
    root->left->left=new node(4);
    root->left->right= new node(5);
    
     root->right->left=new node(6);
      root->right->right=new node(7);



    cout<<diameterOfBT(root);

}