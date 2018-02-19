#include<stdio.h>
#include<conio.h>
void search(int A[],int size,int num);
void main(){
int i,A[20],n,num;
char c;
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++){
scanf("%d",&A[i]);
}
printf("which operation do you want to perform 's' for searching 'd' for deletion 'i' for insertion");
scanf("%c",c);
if(c=='s'){

{printf("enter the number you want to search in array:");
scanf("%d",&num);
search(A,n,num);
}
}
getch();
}
void search(int A[],int size,int num){
int i,a=0;
for(i=0;i<size;i++){
if(A[i]==num){
printf("your number have index %d",i);
a++;
}
}
if(!a){
printf("your number is not present in array");
}
}
