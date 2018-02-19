#include<stdio.h>
#include<string.h>
void  main(){
char str[100];
printf("enter a string\n ");
fgets(str,sizeof(str),stdin);
printf("message is : %s\n",str);
int key,i=0;
printf("enter key :\n");
scanf("%d",&key);
while(str[i]!='\0'){
str[i]=str[i]^key;
i++;
}
printf("encrypted message is : %s\n",str);
i=0;
while(str[i]!='\0'){
str[i]=str[i]^key;
i++;
}
printf("Decrypted message is : %s",str);
}
