#include<stdio.h>
#include<stdlib.h>
void main(){
int i,n;
int *p;
printf("enter size of array:\n");
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));
printf("enter n elements:\n");
for(i=0;i<n;i++){
scanf("%d",&p[i]);
}
printf("your array is:");
for(i=0;i<n;i++){
printf("%d\t",*(p+i));
}
}

