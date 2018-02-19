#include<stdio.h>
#include<stdlib.h>
struct node *creat_node(int info,struct node *head);
struct node *delete_node(int info,struct node *head);
struct node *reverse_list(struct node *head);
struct node
{
int data;
struct node *link;
};
void main(){
struct node *head,*p;
int n,e,i,info;
head=NULL;
printf("\nenter the size of linked list:");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("enter %dth element\n",i+1);
scanf("%d",&info);
head=creat_node(info,head);
}
p=reverse_list(head);
printf("reverse of linkedlist:");
while(p!=NULL){
printf("%d ",p->data);
p=p->link;
}
}
struct node *creat_node(int info,struct node *head){
struct node *next;
next=(struct node *)malloc(sizeof(struct node));
next->data=info;
next->link=head;
head=next;
return head;
}
struct node *reverse_list(struct node *head){
struct node *pre,*next,*temp;
pre=NULL;
next=head->link;
temp=head;
while(temp->link!=NULL){
temp->link=pre;
pre=temp;
temp=next;
next=next->link;
}
temp->link=pre;
head=temp;
return head;
}
struct node *delete_node(int info,struct node *head){
struct node *p,*temp;
p=head;
while(p!=NULL){
if(p->link->data==info){
temp=p->link;
p=temp->link;
free(temp);
return head;
}
p=p->link;
}
}
