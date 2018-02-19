#include<iostream>
using namespace std;
int main(){
int n,i,j,a,b;
cin>>n;
a=n;
for(i=0;i<2*n-1;i++){
a=n;
b=i;
for(j=0;j<2*n-1;j++){
cout<<a<<" ";
if(b>0){
--a;
b--;
}
if(i>0&&j>=2*n-2-i){
++a;
}
}
cout<<'\n';
}
return 0;
}
