#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *ptr;
int ch;
if((ptr=fopen("C:\\Users\\Shubham\\Desktop\\TEST.txt","w"))==NULL){
printf("error in opening file ");
exit(1);
}
printf("enter text :\n");
while((ch=getchar())!=EOF){
fputc(ch,ptr);
}
fclose(ptr);
return 0;
}
