#include<stdio.h>
#include<string.h>
void main()
{
char a[10],b[20],c[30];
printf("enter two strings:");
scanf("%s%s",a,c);
strcpy(b,a);
strcpy(c,b);
printf("%s\n %s\n %s",a,b,c);
}
