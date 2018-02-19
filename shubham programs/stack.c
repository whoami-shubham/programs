#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
typedef struct{
int top;
int size;
int* A;
}stack;
stack *creat(int cap);
int full(stack *s);
int empty(stack *s);
void push(stack *s,int data);
int pop(stack *s);
void main(){
int a,n,choice,data;
stack *p;
printf("enter size of stack :");
scanf("%d",&n);
p=creat(n);
while(1){
printf("\n enter your choice : \n 1. push \n 2. pop \n 0 .exit :\n");
//while(getchar()!='\n');
scanf("%d",&choice);
switch(choice){
case 1:
    {printf("enter data to push:");
 //while(getchar()!='\n');
    scanf("%d",&data);
    printf("hi\n");
     push(p,data);
     break;
    }
case 2:
    {
      printf("%d\n",pop(p));
      break;
    }
case 0:{
    exit(0);
      }
}
//getch();
}
}
stack *creat(int cap){
stack *s=(stack *)malloc(sizeof(stack));
s->top=-1;
s->size=cap;
s->A=(int *)malloc(s->size*sizeof(int));
if(!s->A){
return NULL;
}
return s;
}
int full(stack *s){
return (s->top==s->size-1);
}
int empty(stack *s){
return s->top==-1;
}
void push(stack *s,int data){
if(full(s)){
printf("stack overflow \n");
}
s->A[++(s->top)]=data;
}
int pop(stack *s){
if(empty(s)){
printf("stack underflow");
return -1;
}
return s->A[(s->top)--];
}
