#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main(){
int T,cha,i,j,a=0,b=0,c=0;
char A[21];
printf("enter test case: ");
scanf("%d",&T);
for(i=0;i<T;i++)
{
printf("enter %d th string: ",i);
scanf("%s",A);
for(j=0;j<strlen(A)-1;j++){
(A[j]>=97&&A[j]<=122)?a++:(A[j]>=65&&A[j]<=90)?b++:(A[j]>=48&&A[j]<=57)?c++:j++;
}
if(a&&b&&c){
printf("TRUE\n");
}
else{
    printf("FALSE\n");
}
}
}

