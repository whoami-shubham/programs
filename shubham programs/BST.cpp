#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
int data;
 node *left;
 node *right;
};
node *insert(node *root,int n);
bool elepres(node *root,int n);
void display(node *root);
int main(){
int n;
node *root=NULL;
root=insert(root,5);
cout<<root->data<<endl;
insert(root,4);
cout<<root->data<<endl;
insert(root,9);
cout<<root->data<<endl;
insert(root,7);
cout<<root->data<<endl;
insert(root,2);
cout<<root->data<<endl;
insert(root,13);
cout<<root->data<<endl;
cout<<"enter a number you want to search"<<endl;
cin>>n;
cout<<elepres(root,n)<<endl;
return 0;
}
node *insert(node *root,int n){
int dummy;
if(root==NULL){
node *Node;
Node=(node *)malloc(sizeof(node));
Node->data=n;
Node->left=NULL;
Node->right=NULL;
return Node;
}
else if(root->data<n){
root->right=insert(root->right,n);
}
else if(root->data>=n){
root->left=insert(root->left,n);
}
else{
dummy=0;
}
return root;
}
bool elepres(node *root,int n){
if(!root){
return false;
}
else if(root->data>n){
elepres(root->left,n);
}
else if(root->data<n){
elepres(root->right,n);
}
else{
return true;
}
}
void display(node *root){
if(!root){
cout<<"Null"<<endl;
return;
}
else {
cout<<root->data<<'\n';
}

display(root->left);
display(root->right);
}
