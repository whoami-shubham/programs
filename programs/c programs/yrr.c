#include<stdio.h>
#include<conio.h>
int main(){

int total_cost,t,a=1,i=3,rem,num=0,tip,tax;
double z,mc;
float x,y;
printf("\nenter meal cost,tip,tax:");
scanf("%lf %d,%d",&mc,&tip,&tax);
x=(float)(tip*mc)/100;
y=(float)(tax*mc)/100;
total_cost=x+y+mc;
z=x+y+mc;
t=z*1000;
  while(i--){
        rem=t%10;
        num=num+rem*a;
        a=a*10;
    }
    if(num>500){
    total_cost+=1;
    }
printf("%d",total_cost);
getch();
return 0;
}
