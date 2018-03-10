#ifndef tree
#define tree
#include <bits/stdc++.h>
using namespace std;
struct node
{
	double data;
	node *left;
	node *right;
	node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}
};
void insert(double value, node **root){
if(*(root)==NULL || root==NULL){
	(*root) = new node(value);	
		return;
}
queue<node*>q;
q.push(*root);
while(!q.empty()){
	node *temp = q.front();
	if(temp->left==NULL){
		node *Node=new node(value);
		temp->left=Node;
		return;
	}
	else{
		q.push(temp->left);
	} 
	if(temp->right==NULL){
		node *Node=new node(value);
		temp->right=Node;
		return;
	}
	else{
		q.push(temp->right);
	} 
	q.pop();
}
}
void preorder(node *root){
	if(root){
		cout<<root->data<<"  ";
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(node *root){
	if(root){
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<"  ";
		
	}
}
void inorder(node *root){
	if(root){
		inorder(root->left);
		cout<<root->data<<"  ";
		inorder(root->right);
	}
	return;
}
void BST_insert(double value, node **root){
if((*root)==NULL){
   (*root)=new node(value);
   return;
}
if((*root)->data>value){
	if((*root)->left){
	BST_insert(value,&((*root)->left));
}
else{
	node *Node=new node(value);
	(*root)->left=Node;
    return;
}
}
else{
	if((*root)->right){
	BST_insert(value,&((*root)->right));
}
else{
	node *Node=new node(value);
	(*root)->right=Node;
	return;
}
}
}
#endif