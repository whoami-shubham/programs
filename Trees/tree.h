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
void levelorder(node *root){
queue<node *>q;
q.push(root);
while(!q.empty()){
	node *temp=q.front();
	if(temp){

          cout<<temp->data<<" ";
		if(temp->left){
                  q.push(temp->left);
		}
		if(temp->right){
                q.push(temp->right);
		}
	}
	q.pop();

}
cout<<"\n";
}
int count_nodes(node * root){
if(root==NULL){
return 0;
}
return ( count_nodes(root->left) + count_nodes(root->right) + 1);
}
int search(double value, node * root){
if(!root){
return 0;
}
if(root->data==value){
	return 1;
}
if( search(value,root->left)){
	return 1;
}
 search(value,root->right);

}
double find_max(node *root){
double Max=INT_MIN,left=INT_MIN,right=INT_MIN;
if(root){
if(root->data>Max){
Max=root->data;
}
if(root->left){
left=find_max(root->left);
}
if(root->right){
right=find_max(root->right);
}
}
Max=max(Max,max(left,right));

return Max;
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
