#include <stdio.h>
#include<stdlib.h>
struct node *fun(int info,struct node *head);
struct node
{
int data;
struct node *link;
} *head;
void main(){
head=NULL;
struct node *p;
int i,n,e;
printf("enter the size of linked list:");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("enter %d th element",i+1);
scanf("%d",&e);
head=fun(e,head);
}
p=head;
while(p!=NULL){
printf("%d ",p->data);
p=p->link;
}
}
struct node *fun(int info,struct node *head){
struct node *Q;
Q=(struct node *)malloc(sizeof(struct node));
Q=head;
Q->data=info;
head=Q;
return head;
}
