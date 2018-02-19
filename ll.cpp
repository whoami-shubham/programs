#include<iostream>
using namespace std;
 struct node{
  int data;
  node *next;
};
int main(){
  node *head=NULL;
  int n,a;
  cout<<"enter the size :";
  cin>>n;
  cout<<"enter the "<<n<<" elements :";
  for(int i=0;i<n;i++){
    cin>>a;
    node *temp;
    temp=new node;
    temp->data=a;
    temp->next=head;
    head=temp;
  }
  while(head){
    cout<<"\n"<<head->data <<" ";
    head=head->next;
  }
  return 0;
}
