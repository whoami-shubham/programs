#include<stdio.h>
#include<string.h>
void main()
{
char a[10],b[20],c[30];
printf("enter three strings:");
scanf("%s%s%s",a,b,c);
strcat(b,a);
strcat(c,b);
printf("%s\n %s\n %s\n",a,b,c);
}
