#include<stdio.h>
#include<stdlib.h>
typedef struct
{
int front;
int size;
int *A;
int capacity;
}qu;
int isfull(qu *q);
qu *creat(qu *q,int n);
int isempty(qu *q);
void enque(qu *q,int data);
int deque(qu *q);
void main(){
qu *s;
s=(qu *)malloc(sizeof(qu));
s=creat(s,3);
enque(s,2);
enque(s,4);
enque(s,8);
printf("%d \n ",deque(s));
printf("%d \n",deque(s));
printf("%d \n ",deque(s));
printf("%d \n ",deque(s));
printf("%d \n ",deque(s));
printf("%d \n ",deque(s));

}
qu *creat(qu *q,int n){
q->front=0;
q->size=0;
q->capacity=n;
q->A=(int *)malloc(q->capacity*sizeof(int));
return q;
}
int isfull(qu *q){
return q->size==q->capacity-1;
}
int isempty(qu *q){
return q->size==0||q->size==q->capacity-1;
}
void enque(qu *q,int data){
if(isfull(q)){
printf("queue overflow \n");
}
q->A[(q->size++)]=data;
}
int deque(qu *q){
if(isempty(q)){
printf("queue underflow \n");
}
return q->A[(q->front++)];
}


