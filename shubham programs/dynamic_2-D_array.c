#include<stdio.h>
#include<stdlib.h>
void main(){
int i,n,j,row,column;
printf("enter row and column of 2-D array\n:");
scanf("%d %d",&row,&column);
n=row*column;
int (*p)[column];
p=(int (*)[column])malloc(row*column*sizeof(int));
printf("enter %d elements\n",n);
for(i=0;i<row;i++){
for(j=0;j<column;j++){
scanf("%d",&p[i][j]);
}
}
printf("your array is:\n");
for(i=0;i<row;i++){
for(j=0;j<column;j++){
printf("%d\t",*(*(p+i)+j));
}
printf("\n");
}
}
