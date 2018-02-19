#include<stdio.h>
void main(){

int t,a=1,i=3,rem,num=0,number;
double z;
printf("\nenter number:");
scanf("%lf",&z);
t=z*1000;
number=z;
  while(i){
        rem=t%10;
        num=num+rem*a;
        a=a*10;
        t=t/10;
        i--;
    }
    if(num>500){
        number++;
    }
printf("%d",number);
}
