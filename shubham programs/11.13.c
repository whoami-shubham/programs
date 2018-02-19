#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct BI
{
int age;
char name[30];
char city[20];
};
typedef struct BI BI;
void main(){
int n,i,max,j=0;
printf("enter n :");
scanf("%d",&n);
BI *A;
A=malloc(n*sizeof(BI));
printf("enter %d data ",n);
for(i=0;i<n;i++){
scanf("%d",&A[i].age);
scanf("%s",A[i].name);
fgets(A[i].city,sizeof(A[i].city),stdin);
}
max=A[0].age;
for(i=0;i<n;i++){
if(A[i].age>max){
max=A[i].age;
j=i;
}
}
printf("age = %d, name = %s, city = %s \n",A[j].age,A[j].name,A[j].city);

}
