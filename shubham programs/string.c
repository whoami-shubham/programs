#include<stdio.h>
#include<string.h>
void strrev(char s[]);
void charrev(char s[]);
void main()
{
char str[50];
strcpy(str,"i hear you");
strrev(str);
charrev(str);
char *ptr;
ptr=str;
printf("%s",ptr);
}
void strrev(char s[]){
int i,j,k;
char temp;
k=strlen(s);
for(i=0,j=k-1;i<=j;i++,j--){
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
}
void charrev(char s[]){
int i,j=0,k,l=0;
char temp;
k=strlen(s);
for(i=0;i<k-1;i++){
if(s[i]==' '){
continue;
}
while(s[l]!=' '){
l++;
j=l;
}
while(s[j]!=' '&& j<k){
temp=s[i];
s[i]=s[j];
s[j]=temp;
i++;
j--;
}
}
