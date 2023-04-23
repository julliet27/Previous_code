#include <bits/stdc++.h>
using namespace std;
  
// Node Structure of K-ary Tree
class NewNode {
public:
    int key;
  
    // All children are stored in a list
    vector<NewNode*> child;
    NewNode(int val)
        : key(val)
    {
    }
};
  
// Utility function to print the
// preorder of the given K-Ary Tree
void preorderTraversal(NewNode* root)
{
    stack<NewNode*> Stack;
  
    // 'Preorder'-> contains all the
    // visited nodes
    vector<int> Preorder;
  
    Stack.push(root);
  
    while (!Stack.empty()) {
        NewNode* temp = Stack.top();
        Stack.pop();
        // store the key in preorder vector(visited list)
        Preorder.push_back(temp->key);
        // Push all of the child nodes of temp into
        // the stack from right to left.
        for (int i = temp->child.size() - 1; i >= 0; i--) {
            cout<<i;
            Stack.push(temp->child[i]);
        }
        cout<<" ";
    }
    for (auto i : Preorder) {
        // cout << i << " ";
    }
    cout << endl;
}
  
// Driver Code
int main()
{
  
    // input nodes
    /*
             1
          /  |  \
         /   |   \
        2    3    4
       / \      / | \
      /   \    7  8  9
     5     6
    /    / | \
   10   11 12 13
    */
  
    NewNode* root = new NewNode(1);
    root->child.push_back(new NewNode(2));
    root->child.push_back(new NewNode(3));
    root->child.push_back(new NewNode(4));
  
    root->child[0]->child.push_back(new NewNode(5));
    root->child[0]->child[0]->child.push_back(
        new NewNode(10));
    root->child[0]->child.push_back(new NewNode(6));
    root->child[0]->child[1]->child.push_back(
        new NewNode(11));
    root->child[0]->child[1]->child.push_back(
        new NewNode(12));
    root->child[0]->child[1]->child.push_back(
        new NewNode(13));
    root->child[2]->child.push_back(new NewNode(7));
    root->child[2]->child.push_back(new NewNode(8));
    root->child[2]->child.push_back(new NewNode(9));
  
    preorderTraversal(root);
}
  
// This code is contributed by sarangiswastika5