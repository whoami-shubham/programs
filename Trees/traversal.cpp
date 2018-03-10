
#include "tree.h"
int main(){
node *head=NULL;
char ch='y';
double val;
int value;
do{
cout<<"enter how many nodes you want to insert in binary tree \n";
cin>>value;
cout<<" enter "<<value<<"  values \n";
for(int i=0;i<value;i++){
cin>>val;
insert(val,&head);
}
cout<<"do you want to insert again then press any key otherwise press n or q for quit\n";
cin>>ch;
}while(ch!='n' && ch!='C' && ch!='q' && ch!='Q');
  cout<<" Preorder traversal of tree is : \n";
  cout<<"----------------------------------\n";
  preorder(head);
  cout<<"\n Inorder traversal of tree is : \n";
  cout<<"----------------------------------\n";
   inorder(head);
   cout<<"\n Postorder traversal of tree is : \n";
  cout<<"----------------------------------\n";
  postorder(head);

 
return 0;
}