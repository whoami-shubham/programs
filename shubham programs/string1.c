#include<stdio.h>
#include<string.h>
void str_rev(char str[],int start,int end);
void word_rev(char str[],int start,int end);
void main()
{
char str[20];
strcpy(str,"i am checking ");
str_rev(str,0,strlen(str)-1);
}
void word_rev(char str[],int start,int end){
int i=0,j=strlen(str)-1;
char temp;
for(i=0;j>=i;i++,j--){
temp=str[i];
str[i]=str[j];
str[j]=temp;
}
j=0;
for(i=0;i<strlen(str)-1;i++)
if(str[i]=' '||str[i]='\0'){
continue;
}
i=j;
while(str[i]!=' '&&(i<strlen(str)-1)){
j++;
}
j--;
str_rev(str[],i,j);
}
puts(str);
]
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

 
