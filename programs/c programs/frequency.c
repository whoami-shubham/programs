#include<stdio.h>
#include<stdlib.h>
void main(){
int *A,*B,i,j,k,size1,size2;
printf("\nenter size of array:");
scanf("%d",&size1);
size2=size1;
A=(int *)malloc(size1*sizeof(int));
B=(int *)malloc(size2*sizeof(int));
printf("enter %d elements\n",size1);
for(i=0;i<size1;i++){
scanf("%d",&A[i]);
}
for(i=0;i<size2;i++){
B[i]=A[i];
}
for(i=0;i<size1;i++){
for(j=i+1;j<size2;j++){
if(A[i]==B[j]){
for(k=j;k<size2;k++){
B[k+1]=B[k];
}
size2--;
i=0;
j=0;
}
}
}
int F[size2];
for(i=0;i<size2;i++){
F[i]=0;
}
for(i=0;i<size2;i++){
for(j=0;j<size1;j++){
if(B[i]==A[j]){
F[i]+=1;
}
}
}
for(i=0;i<size2;i++){
printf("frequency of %d\t is %d\n",B[i],F[i]);
}
}
