// Example program
#include <iostream>
#include <string>
using namespace std;
int abs(int n){
  if(n>0){
    return n;
  }
  return n*(-1);
}
int reverse(int x) {
       if(abs(x)>2147483647){
           return 0;
       }
           int sign=1,a=10,num=0,y=x;
           if(y<0){
               sign=-1;
               y=y*sign;
           }
           while(y){
               if( abs(y)>=10 && abs(num)>21474836){
                 return 0;
             }
               if( abs(y)>=10 && abs(num)>=21474836){
                   if((abs(y%10)*10+abs(y/10))>47){
                 return 0;
                   }
             }
               num=num*a + y%10;
               y=y/10;

           }
           num=num*sign;

       return num;

   }
int main()
{
  int n;
  cout << "What is your name? ";
  cin>>n;
  cout << reverse(n);
  cout<<a;
  return 0;
}
