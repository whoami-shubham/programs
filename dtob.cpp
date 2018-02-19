#include<iostream>
#include<stack>
using namespace std;
int main(){
/*
int desimal,binary=0,multiplier=1;
cin>>desimal;
while(desimal>0){
cout<<"desimal "<<desimal<<" binary "<<binary<<" multiplier "<<multiplier<<endl;
 binary = (desimal%2)*multiplier + binary;
 desimal=desimal/2;
 multiplier=multiplier*10;
}
*/
int desimal,binary=0;
cin>>desimal;
stack<int>s;
while(desimal>0){
   s.push(desimal%2);
   desimal=desimal/2;
}
while(s.size()>0){
binary=binary*10+s.top();
s.pop();
}
cout<<binary<<endl;


return 0;
}
