#include<stdio.h>
int main(){
int n=0,i,j,k=0;
char c;
do{
    printf("Height : ");
    k=scanf("%d",&n);
if(k==1 && (n>=0 && n<=23)){
for(i=0;i<n;i++){
    for(j=0;j<=n-2-i;j++){
        printf(" ");
    }
    for(j=i+2;j>0;j--){
        printf("#");
    }
    printf("\n");
}
}

while ((c = getchar()) != '\n' && c != EOF) { }
}while(k!=1 || !(n>=0 && n<=23));

return 0;

}
