#include <bits/stdc++.h> 
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
void preorder(Node* root){
    while(root!=NULL){
        
    }
}
// void inorder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// void postorder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     inorder(root->right);
//     cout<<root->data<<" ";
// }
int main(){
    struct Node* root = new Node(1);
    root->left = new Node(12);
    root->right = new Node(9);
    root->left->left = new Node(5);
    root->left->right = new Node(6);
    // preorder(root);
    postorder(root);
}