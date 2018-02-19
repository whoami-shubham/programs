#include<stdio.h>
#include<stdlib.h>
int main() {
int n,i,*a,j,temp,sum=0,mode;
    float mean,median;
    scanf("%d",&n);
  a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    mean=(float)sum/n;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    if(n%2==0){
        median=(float)(a[n/2-1]+a[n/2])/2;

    }
    else{
        median=a[n/2];
    }
    mode=a[0];
    printf("%.1f\n%.1f\n%d\n",mean,median,mode);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
