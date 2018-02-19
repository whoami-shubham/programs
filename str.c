#include<stdio.h>
void main(){
char a[] = "CODEAEPT"; 
char *p =a; 
printf("%s", p + p[3] - p[4]) ;
}
