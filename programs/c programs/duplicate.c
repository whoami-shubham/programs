#include<stdio.h>
void main(){
int i,j,k,size1;
printf("\nenter size of array:");
scanf("%d",&size1);
int A[100];
printf("enter %d elements\n",size1);
for(i=0;i<size1;i++){
scanf("%d",&A[i]);
}
for(i=0;i<size1;i++){
for(j=i+1;j<size1;j++){
if(A[i]==A[j]){
for(k=j;k<size1;k++){
A[k]=A[k+1];
}
size1--;
i=0;
j=0;
}
}
}
for(i=0;i<size1;i++){
printf("%d",A[i]);
}
}
