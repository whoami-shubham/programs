#include<stdio.h>
#include<conio.h>
void main(){
int i,h=0,j,k=1,m,n,o=1, A[100],B[100];
printf("enter size of array:");
scanf("%d",&n);
printf("enter elements of array:");
for(i=0;i<n;i++){
scanf("%d",&A[i]);
}
B[0]=A[0];
for(i=1;i<n;i++){
for(j=0;j<k;j++){
  m=k;
while(m!=0){
if(B[j]==A[i]){
h++;
}
m--;
}
  if(h){
    break;
}
else{B[o]=A[i];
k++;
o++;
}
}
h=0;
}
for(i=0;i<k;i++){
printf("%d",B[i]);
}
getch();
}
