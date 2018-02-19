#include<stdio.h>
#include<stdlib.h>
void main()
{
int p=0,q,r,n1,n2,i,j,k,A[100];
printf("enter size of array:");
scanf("%d",&r);
q=r/2;
n1=p+q;
n2=r-q;
int L[n1+1],R[n2+1];
printf("enter %d elements:",r);
for(i=0;i<r;i++){
scanf("%d",&A[i]);
}
for(i=0;i<=n1;i++){
L[i]=A[i];
}
L[n1+1]=10000;
for(i=q,j=0;i<r,j<=n2;i++,j++){
R[j]=A[i];
}
R[n2+1]=10000;
i=0;
j=0;
k=0;
while(i<n1+2&&j<n2+2){
if(L[i]>=R[j]){
A[k]=R[j];
j++;
}
else{
A[k]=L[i];
i++;
}
k++;
}
while(i<n1+1){
    A[k]=L[i];
    i++;
    k++;
}
while(j<n2+1){
    A[k]=R[j];
    j++;
    k++;
}
for(i=0;i<r;i++){
    printf("%d ",A[i]);
}
}
