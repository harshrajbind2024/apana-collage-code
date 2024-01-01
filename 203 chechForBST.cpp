//     run

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

bool chechBST(node *root,node *min,node *max){
    if(root==NULL){
        return true;
    }
    if(min!=NULL&&root->data>=min->data){
        return false;
    }
    if(max !=NULL&&root->data<=max->data){
        return false;
    }

    bool leftValid=chechBST(root->left,min,root);
    bool rightvalid=chechBST(root->right,root,max);
    // return leftValid + rightvalid;  wrong
     return leftValid and rightvalid;
}

int main()
{  
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(10);
    root->left->right = new node(70);

    root->right->left = new node(6);
    root->right->right = new node(7);

    if(chechBST(root,NULL,NULL)){
        cout<<" volid BST";
    }else{
        cout<<" not volid ";
    }
  
  
}
