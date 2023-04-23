#include <bits/stdc++.h> 
using namespace std;
struct Node{
    int data;
    struct Node *left,*right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
int maxHeight(Node *node){
    if(node==NULL){
        return 0;
    }
    int heightL=maxHeight(node->left);
    int heightR=maxHeight(node->right);
    if(heightL>heightR){
        return (heightL+1);
    }
    return(heightR+1);
}
int main() {
  struct Node* root = new Node(1);
  root->left = new Node(12);
  root->right = new Node(9);
  root->left->left = new Node(5);
  root->left->right = new Node(6);
  cout<<maxHeight(root);
}