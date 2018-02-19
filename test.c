#include<stdio.h>
#include "myfile.h"
void main(){
int n,b;
printf("enter a number : ");
scanf("%d",&n);
b = fun(n);
printf("your number is  %d",b );
}