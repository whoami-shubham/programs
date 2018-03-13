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

void print_Array(vector<double> v);

/*
 *print all path
 */
void print_all_path(node *root,int length,vector<double> A){
if(!root){
return;

}
A.push_back(root->data);

if((root->left==NULL) && (root->right==NULL)){

	print_Array(A);
}
else{

print_all_path(root->left,length,A);
print_all_path(root->right,length,A);
}

}

/*
 * compair two tree
 *
 */

bool compair_tree(node *root1, node *root2){
if(!root1 && !root2){
return true;
}
if(root1 && root2){
if(root1->data==root2->data){
return compair_tree(root1->left,root2->left);
return compair_tree(root1->right,root2->right);
}
else{
	return false;
}
}


}



/*
 *print all elements
 *
 */
 void print_Array(vector<double> A){

for(int i=0;i<A.size();i++){
cout<<A[i]<<" ";
}


 }

/*
* create
*/



node *create(node **head){

char ch='y';
double val,e;
int value,ans;
do{
cout<<"enter how many nodes you want to insert in binary tree \n";
cin>>value;
cout<<" enter "<<value<<"  values \n";
for(int i=0;i<value;i++){
cin>>val;
insert(val,head);
}
cout<<"do you want to insert again then press any key otherwise press n or q for quit\n";
cin>>ch;
}while(ch!='n' && ch!='C' && ch!='q' && ch!='Q');
return *head;

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
