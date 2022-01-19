// Binary Tree Traversal in C++

#include <stdlib.h>
#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* right;
    struct Node* left;
    
    Node(int data){
        this->data=data;
        right=NULL,left=NULL;
    }
};

void inorderTraversal(struct Node* node){
    if(node==NULL)return;
    inorderTraversal(node->left);
    cout<<node->data<<" ";
    inorderTraversal(node->right);
}
void preorderTraversal(struct Node* node){
    if(node==NULL)return;
    cout<<node->data<<" ";
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}
void postorderTraversal(struct Node* node){
    if(node==NULL)return;
    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout<<node->data<<" ";
}
int main(){
    struct Node* root=new Node(1);
    root->left=new Node(12);
    root->right=new Node(9);
    root->left->left=new Node(5);
    root->left->right=new Node(6);
    
    cout<<"Inorder--"<<endl;
    inorderTraversal(root);
    cout<<endl;
    cout<<"Preorder--"<<endl;
    preorderTraversal(root);
    cout<<endl;
    cout<<"Postorder--"<<endl;
    postorderTraversal(root);
    cout<<endl;
    return 0;
}
