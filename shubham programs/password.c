#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main(){
int T,i,j,a=0,b=0,c=0;
char temp,A[21];
printf("enter test case");
scanf("%d",&T);
printf("enter %d string",T);
for(i=0;i<T;i++){
scanf("%s",A);
if(strlen(A)>20||strlen(A)<6){
printf("FALSE\n");
}
else{
for(j=0;i<strlen(A)-1;i++){
if(islower(A[i])){
a++;
}
else if(isupper(A[i])){
b++;
}
else{
if(isdigit(A[i])){
c++;
}
}
}
if(a>0&&b>0&&c>0){
printf("TRUE\n");
}
else{
printf("FALSE\n");
}
}
}
}
