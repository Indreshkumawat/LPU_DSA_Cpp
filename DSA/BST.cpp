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
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
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
    cout<<"Enter data: "<<endl;
    cin>>data;
    while(data != -1){
        root = buildTree(root,data);
        cin>>data;
    }
}
Node* minValue(Node* root){
    Node* temp = root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}
Node* maxvalue(Node* root){
    Node *temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}
bool SerachVal(Node* root, int targ){
    if(root == NULL){
        return false;
    }
    if(root->data == targ){
        return true;
    }
    if(root->data > targ){
         return SerachVal(root->left, targ);
    }
    return SerachVal(root->left, targ);
    
}
Node* deleteNode(Node* root,int target){
    if(root == NULL){
        return NULL;
    }
    if(root->data == target){
        //leaf node 
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        //one node to left -->
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //one node to right 
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;

        }
        //when have both the nodes
        if(root->left != NULL && root->right != NULL){
            Node* maxi = maxvalue(root->left);
            root->data = maxi->data;
            root->left = deleteNode(root->left,maxi->data);
        }

    }else if(root->data > target){
        root->left = deleteNode(root->left,target);
      
    }else{
         root->right = deleteNode(root->right,target);
        
    }

    return root;
}
int main(){

    Node* root  = NULL;

    insertNodes(root);

    // if(root != NULL){
    //     cout<<"we have made the tree";
    // }
    inorder(root);
    cout<<endl;
    // Node* MinVal = MinValue(root);
    // cout<<MinVal->data;
    // bool ans = SerachVal(root, 13);
    // cout<<ans;

    root = deleteNode(root,40);
    inorder(root);


}