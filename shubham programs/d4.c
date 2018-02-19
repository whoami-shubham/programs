#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T,i,j,l,k,n;
    char *S[10];
printf("\nenter test case:");	
    scanf("%d",&T);
    for(i=0;i<T;i++){
        S[i]=(char *)malloc(10000*sizeof(char));
printf("\nenter a string:");
        gets(S[i]);
       l=strlen(S[i]);
    for(j=0;j<l;j+=2){
        printf("%c",S[i][j]);
            }
        printf("  ");
    for(k=1;k<l;k+=2){
            printf("%c",S[i][k]);
        }
         printf("\n");
    
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

