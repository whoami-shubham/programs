#ifndef tree
#define tree
#include <bits/stdc++.h>
using namespace std;
/*
* i made this structure for making a node 
*
*
*/
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

/*
* insert function is used to insert a element in any binary tree 
* it uses queue for level order traversal and at any point
* if we get any empty node then we insert at there
*
*/

void insert(double value, node **root){
if(*(root)==NULL || root==NULL){  // this is for that condition when we have empty tree i.e we don't have any node 
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
/*
 * preorder traversal print data when we get any node then go to left recursively and then go to right recursively  
*/

void preorder(node *root){
	if(root){
		cout<<root->data<<"  ";
		preorder(root->left);
		preorder(root->right);
	}
}

/*
 * post order traversal 
*/
void postorder(node *root){
	if(root){
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<"  ";
		
	}
}
/*
*inorder 
*/
void inorder(node *root){
	if(root){
		inorder(root->left);
		cout<<root->data<<"  ";
		inorder(root->right);
	}
	return;
}
/*
 * level order
*/
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
/* count number of nodes it is also called size of tree
 */
int count_nodes(node * root){
if(root==NULL){
return 0;
}
return ( count_nodes(root->left) + count_nodes(root->right) + 1);
}

/*
 * search any element in tree
 */
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
/*
 *find maxium element in tree
 */
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
/*
 * delete tree
 */

void delete_tree(node * root){
if(root){
delete_tree(root->right);
delete_tree(root->left);
}
 free(root);
}

/*
 * insertion in BST
 */
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
