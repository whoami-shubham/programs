#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,j,key,n,temp;
int *arr;
printf("enter size of array:");
scanf("%d",&n);
//fputs("\x1b[2j",stdout);
arr=(int *)malloc(n*sizeof(int));
printf("enter %d integers: ",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(j=1;j<n;j++){
        i=j-1;
key=arr[j];
while(key<arr[i]&&i>=0){
arr[i+1]=arr[i];
i--;
arr[i+1]=key;
}
}
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
free(arr);
}
