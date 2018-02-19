#include<stdio.h>
#include<string.h>
void main(){
char a[20],b[22];
int n;
printf("enter two string:\n");
scanf("%s %s",a,b);
n=strcmp(a,b);
printf("%d",n);
}
