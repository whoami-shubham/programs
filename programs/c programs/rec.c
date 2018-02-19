#include <stdio.h>
int even(int a,int b);
int odd(int a,int b);
int main(){
int a,b;
//where b>a
printf("enter two numbers :");
scanf("%d%d",&a,&b);
even(a,b);
odd(a,b);
return 0;
}
int even(int a,int b){
int i;
for(i=a;i<=b;i++){
if(i%2==0){
return i;
}
return even(i+1);
}
}
int odd(int a,int b){
int i;
for(i=a;i<=b;i++){
if(i%2!=0){
return i;
}
return odd(i+1);
}
}
