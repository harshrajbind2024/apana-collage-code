
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


vector<node*>constructTree(int start,int end){
    vector<node*>tree;
    
    if(start>end){
        tree.push_back(NULL);
        return tree;
    }

    for(int i=start;i<end;i++){
        vector<node*>leftSubTree=constructTree(start,i-1);
        vector<node*>rightSubTree=constructTree(i+1,end);


        // catalan
        for(int j=0;j<leftSubTree.size();j++){
            // vector<node*> left=leftSubTree[j];   wrong
            node *left=leftSubTree[j];
            for(int k=0;k<rightSubTree.size();k++){
                node *right=rightSubTree[k];
                node *data1=new node(i);
                data1->left=left;
                data1->right=right;
                tree.push_back(data1);
            }

        }
    }
    return tree;
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
    vector<node*> totalTree=constructTree(1,3);
    for(int i=0;i<totalTree.size();i++){
        cout<<(i+1)<<" : ";
         preOrder(totalTree[i]);
    }   

    
}