#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    if(root== NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
Node* buildTree(Node* root){
    cout<<"Enter the data:"<<endl;
    int data;
    cin>>data;
   
    if(data==-1){
        return NULL;
    }
    Node* newNode = new Node(data);
    root = newNode;
    cout<<"Enter the data for inserting in left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for inserting in right of "<<data<<endl;
    root->right=buildTree(root->right); 
    return root;
}

void levelOrderTraversal(Node* root){
   // vector<int> v;
    queue<Node*> q; 
    int count = 0;

    q.push(root);

    while(!q.empty()){
        Node* root = q.front();
        q.pop();
        count++;
        cout<<root->data<<" ";
      //  v.push_back(root->data);
        if(root->left != NULL){
            q.push(root->left);
        }
        if(root->right != NULL){
            q.push(root->right);
        }
    }

    // for(int j = 0;j<v.size();j++){
    //     cout<<v[j]<<" ";
    // }
}

int countNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    // int left = countNodes(root->left);
    // int right = countNodes(root->right);
    // int ans = 1 + left + right; 

    // return ans;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main(){
    Node* root = NULL;

   // root = buildTree(root);

   // cout<<root->data;

    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);
    Node* n5 = new Node(50);
    Node* n6 = new Node(60);
    
    n1->left = n2;
    n2->left = n3;
    n3->right = n4;
    n4->left = n5;
    n4->right = n6;

    //inorder(n1);
    //preorder(n1);
    //  postorder(root);

   // levelOrderTraversal(root);

   cout<<countNodes(n6)<<endl;
   cout<<countNodes(n1);

}