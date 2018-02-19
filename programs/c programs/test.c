#include<stdio.h>
void main(){
int i,element,count=0;
int a[10]={1,2,3,4,5,6,7,8,9,10};
char ch;
do{
printf("enter element to search:");
scanf("%d",&element);
for(i=0;i<10;i++){
if(element==a[i]){
printf("element is at index : %d\n",i);
count++;
}
}
if(!count){
    printf("element does not present in array\n");
}
printf("do you want more search enter 'y' for further search or 'q' for quit:\n");
scanf("%c",&ch);
if(ch=='q'||ch=='Q'){
break;
}
}while(ch=='y'||ch=='Y');
}
