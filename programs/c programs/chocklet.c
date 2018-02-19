#include<stdio.h>
#include<stdlib.h>
int getWays(int size, int* s, int d, int m){
    int i,j,sum=0,r=0;
    for(i=0;i<size;++i){
        for(j=i;j<m+i&&j<size;++j){
            sum+=s[j];
            }
            if(sum==d){
                r=r+1;
            }

        sum=0;
    }
    return r;
    // Complete this function
}

int main() {
    int n,i;
    printf("enter size of chocklet blocks :");
    scanf("%d",&n);
    int *s = malloc(sizeof(int) * n);
    printf("enter %d nubers : ",n);
    for(i = 0; i < n;i++){
       scanf("%d",&s[i]);
    }
    int d;
    int m;
    printf("enter DOB and month of birthday :");
    scanf("%d %d",&d,&m);
    int result = getWays(n, s, d, m);
    printf("%d\n", result);
    return 0;
}
