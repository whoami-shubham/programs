#include<stdio.h>
#include<math.h>
void main(){
int n,d,sum=0,x,z=0;
double y;
scanf("%d",&n);
while(n){
d=n%10;
sum=sum+d*d;
n=n/10;
}
y=sqrt(sum);
printf("%lf",y);
x=y*1000;
printf("%d",x);
printf("%d\n %d\n %d\n ",x%10,x%100,x%1000);
if((x%10==0)&&(x%100==0)&&(x%1000==0)){
    z++;
printf("yes");
}
printf("%d",z);
}
