#include<iostream>
using namespace std;
int main(){
int a=5;
int *p=&a;
int **ptr=&p;
int ***ptrr=&ptr;
cout<<***ptrr<<" "<<*ptr<<" "<<p;
return 0;
}
