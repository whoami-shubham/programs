#include<iostream>
using namespace std;
int main(){
int t,k;
cin>>t;
for(k=0;k<t;k++){
string a,b,a1="",b1="";
cin>>a;
cin>>b;
int i,j,n1=a.length(),n2=b.length(),n,m;
n=n1>n2?n2:n1;
m=n1>n2?n1:n2;
for(i=0;i<n;i++){
for(j=0;j<m;j++){
if(n2>n1){
if(a[j]==b[i]){
a1=a1+b[i];
//cout<<"a1 :"<<a1<<" ";
a=a.substr(0,j) + a.substr(j+1,a.length());
//cout<<"a : "<<a<<"\n";
}
}
else{
if(a[i]==b[j]){
a1=a1+b[j];
//cout<<"a1 :"<<a1<<" ";
b=b.substr(0,j) + b.substr(j+1,b.length());
//cout<<"a : "<<b<<"\n";

}
}
}
}
cout<<n1-a1.length()+n2-a1.length()<<"\n";


}
return 0;
}
