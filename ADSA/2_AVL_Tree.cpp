// 2. Write a program to implement AVL tree operations.

#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left,*right;
    int height;
};
int hei(Node* root){
    if(root == NULL) return 0;
    return root->height;
}
int bal(Node* root){
    if(root==NULL) return 0;
    return hei(root->left) - hei(root->right);
}
Node* minNode(Node* root){
    Node* temp = root;
    while(temp->left!=NULL) temp = temp->left;
    return temp;
}
Node* create(int data){
    Node* node = new Node();
    node->data = data;
    node->left = node->right = NULL;
    node->height = 1;
    return node;
}

// Right Rotation
Node* right(Node* y){
    Node* x = y->left;
    Node* t = x->right;

    x->right = y;
    y->left = t;

    y->height = max(hei(y->left),hei(y->right))+1;
    x->height = max(hei(x->left),hei(x->right))+1;
    return x;
}

// Left Rotation
Node* left(Node* x){
    Node* y = x->right;
    Node* t = y->left;

    y->left = x;
    x->right = t;

    x->height = max(hei(x->left),hei(x->right))+1;
    y->height = max(hei(y->left),hei(y->right))+1;
    return y;
}

Node* insert(Node* root,int key){
    if(root==NULL) return create(key);
    if(key < root->data) root->left = insert(root->left,key);
    else if(key > root->data) root->right = insert(root->right,key);
    else return root;

    root->height = max(hei(root->left),hei(root->right))+1;
    int b = bal(root);

    // 4 Cases
    if(b>1 && key < root->left->data) return right(root);   //LL Case
    if(b<-1 && key > root->right->data) return left(root);  //RR Case
    if(b>1 && key > root->left->data){                      //LR Case
        root->left = left(root->left);
        return right(root);
    }
    if(b<-1 && key <root->right->data){                     //RL Case
        root->right = right(root->right);
        return left(root);
    }
    return root;
}

Node* Delete(Node* root,int key){
    if(root==NULL) return root;
    if(key < root->data) root->left = Delete(root->left,key);
    else if(key > root->data) root->right = Delete(root->right,key);
    else{
        if(root->left == NULL || root->right == NULL){
            Node* temp = root->left?root->left:root->right;
            if(temp == NULL) {
                temp = root;
                root = NULL;
            }
            else{
                *root = *temp;
            }
            delete temp; 
        }
        else{
            Node* temp = minNode(root->right);
            root->data = temp->data;
            root->right = Delete(root->right,temp->data);
        }
    }
    if(root==NULL) return root;
    root->height = max(hei(root->left),hei(root->right))+1;
    int b = bal(root);
    if(b>1 && bal(root->left) >= 0) return right(root);
    if(b>1 && bal(root->left) <0){
        root->left = left(root->left);
        return right(root);
    }
    if(b<-1 && bal(root->right) <= 0) return left(root);
    if(b<-1 && bal(root->right) >0){
        root->right = right(root->right);
        return left(root);
    }
    return root;
}
// Inorder traversal
void display(Node* root){
    if(root != NULL){
        display(root->left);
        cout << root->data << " -> ";
        display(root->right);
    }
}
int main(){
    Node* root = NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);
    cout<<"Before Deletion: ";
    display(root);
    cout<<"NULL\n";

    root=Delete(root,40);

    cout<<"After Deletion: ";
    display(root);
    cout<<"NULL\n";

    return 0;
}