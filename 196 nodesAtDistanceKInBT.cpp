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
 
void printSubtree(node *root,int k){
    if(root==NULL||k<0){
        return ;

    }
    if(k==0){
        cout<<root->data<<" ";
        return ;
    }
    printSubtree(root->left,k-1);
    printSubtree(root->right,k-1);
}
 

int printNOdeAtK(node *root,node *target,int k){
    // if(root==NULL){   wrong
    //     return -1;
    // }
    if(root==target){
        printSubtree(root,k);
    }
    int distance_left=printNOdeAtK(root->left,target,k);
    if(distance_left!=-1){
        if(distance_left+1==k){
            cout<<root->data<<" ";
        }else{
            printSubtree(root->right,k-distance_left-2);
        }
        return distance_left+1;
    }
    return -1;

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
    cout<<printNOdeAtK(root , root , 2);

    return 0;
}
