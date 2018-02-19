#include<stdio.h>
int series(int n);
int main(){
int n;
printf("enter a number of series :");
scanf("%d",&n);
printf("\b\b=%d\n\n\n");
return 0;
}
int series(int n){
int sum;
if(n==0)
return 0;
return (n+series(n-1));
printf("%d +",n);
}
