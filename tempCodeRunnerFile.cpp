#include<iostream>
#include<queue>
using namespace std;



class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildTree(node* root){
    int data;
    cout<<"Enter the data:";
    cin>>data;
    root= new node(data);

    if (data==-1){
        return NULL;
    }
    cout<<"Enter the left node:"<<endl;
    root->left =buildTree(root->left);
    cout<<"Enter the right node:"<<endl;
    root->right =buildTree(root->right);
    return root;
}

void inorder(node* root){
    if(root == NULL){
        return;
        }
    
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
    
}
void  preorder(node* root) {
    if(root==NULL){
        return;
    }
    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
    

}
void postorder(node* root){
    if(root==NULL){
        return;
    }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    

    }

void levelOrderTraverse(node* root){
    queue <node *> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        
        node* temp = q.front();
        q.pop();
        
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if (temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
int height(node* node) {
        if (node == NULL)
            return 0;
        else {
            int leftHeight = height(node->left);
            int rightHeight = height(node->right);

            return max(leftHeight, rightHeight) + 1;
        }
    }

void printLeafNodes(node* node) {
        if (node == NULL)
            return;

        if (node->left == NULL && node->right == NULL)
            cout << node->data << " ";

        printLeafNodes(node->left);
        printLeafNodes(node->right);
    }

node* mirror(node* node) {
        if (node == NULL)
            return node;

        node* left = mirror(root->left);
        node* right = mirror(root->right);

        node->left = right;
        node->right = left;

        return node;
    }
int main() {
    node* root=NULL;
    root= buildTree(root);
    cout<<endl;
    cout<<"Inorder: ";
    inorder(root);
    cout<<endl;
    cout<<"preorder: ";
    preorder(root);
    cout<<endl;
    cout<<"postorder: ";
    postorder(root);
    cout<<endl;
    cout<<"Levelorder: "<<endl;
    levelOrderTraverse(root);
    cout<<endl;
    cout<<"height:";
    cout<<height(root);
    cout<<endl;
    cout<<"leaf node: ";
    printLeafNodes(root);

    return 0;
}