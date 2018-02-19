#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
void str_rev(char str[],int start,int end);
void word_rev(char str[],int start,int end);
void main()
{
int i;
char str[20];
strcpy(str,"i am checking");

word_rev(str,0,strlen(str)-1);
for(i=0;i<=strlen(str)-1;i++){
    printf("%c",str[i]);
}
printf("\n");
printf("WTF !!!!");
}
void word_rev(char str[],int start,int end){
int i,j;
for(i=j=start;i<end;i++)
if(isspace(str[j])){
continue;
}
i=j;
while(!(isspace(str[j]))&&(j<end)){
j++;
}
j--;
str_rev(str,i,j);
}
void str_rev(char str[],int start,int end){
char temp;
while(end>=start){
temp=str[start];
str[start]=str[end];
str[end]=temp;
start++;
end--;
}
}
