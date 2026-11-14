#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
    
};
Node* buildTree(Node* root,int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(data > root->data){
        root->right = buildTree(root->right,data); 
    }
    if(data < root->data){
        root->left = buildTree(root->left,data);
    }
    return root;
}

void insertNodes(Node* &root){
    int data;
    cin>>data;
    while(data != -1){
        root = buildTree(root,data);
        cin>>data;
    }
}