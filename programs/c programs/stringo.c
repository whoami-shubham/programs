#include<stdio.h>
#include<string.h>
void strre(char* s,int strat,int end);
void charre(char* s,int k);
void main()
{
char str[50];
strcpy(str,"i hear you");
strre(str,0,strlen(str)-1);
charre(str,strlen(str)-1);
char *ptr;
ptr=str;
printf("%s",ptr);
}
void strre(char* s,int start,int end){
char temp;
while(end>=start){
temp=s[start];
s[start]=s[end];
s[end]=temp;
}
}
void charre(char* s,int k){
int i,j;
char temp;
for(i=0;i<k;i++){
if(s[i]==' '){
continue;
}
j=i;
while(s[j]!=' '&& j<=k){
j++;
}
strre(s,i,j);
}
}
