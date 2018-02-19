#include<iostream>
#include<cstdlib>
using namespace std;
struct BST{
struct BST *left;
int data;
struct BST *right;
};
typedef struct BST BST;
BST *insert(BST *root,int value);
void preorder(BST *root);
void postorder(BST *root);
void inorder(BST *root);
int countnodes(BST *root);
int main(){
BST *Root=NULL;
Root=insert(Root,5);
insert(Root,4);
insert(Root,6);
insert(Root,8);
insert(Root,3);
insert(Root,2);
insert(Root,12);
cout<<"inorder traversal :";
inorder(Root);
cout<<"preorder traversal :";
preorder(Root);
cout<<"postorder traversal :";
postorder(Root);
cout<<'\n';
cout<<"total nodes are :"<<countnodes(Root)<<endl;
return 0;
}
BST *insert(BST *root,int value){
if(root==NULL){
BST *temp;
temp=(BST *)malloc(sizeof(BST));
temp->data=value;
temp->left=NULL;
temp->right=NULL;
return temp;
}
else if(root->data<value){
root->right=insert(root->right,value);
}
else{
root->left=insert(root->left,value);
}
return root;
}
void preorder(BST *root){
if(root==NULL){
return ;
}
cout<<root->data<<"  ";
preorder(root->left);
preorder(root->right);
}
void postorder(BST *root){
if(root==NULL){
return ;
}
postorder(root->left);
postorder(root->right);
cout<<root->data<<"  ";
}
void inorder(BST *root){
if(root==NULL){
return ;
}
inorder(root->left);
cout<<root->data<<"  ";
inorder(root->right);
}
int countnodes(BST *root){
if(root==NULL){
return 0;
}
return 1+countnodes(root->left)+countnodes(root->right);
}
