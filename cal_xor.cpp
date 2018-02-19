#include<iostream>
using namespace std;
int main(){
int a,b=0;
char c='^';
while(c=='^'){
cin>>a;
b=b^a;
cout<<b<<"\t";
cin>>c;
cout<<"\n";
}
return 0;
}
