#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
long long T,A,B,N,i,j,C[10000000000],Ans[10000000000];
cin>>T;
for(i=0;i<T;i++){
cin>>A>>B>>N;
C[0]=A-B;
C[1]=A;
C[2]=B;
if(N==1){
Ans[i]=(long long )C[1]%1000000007;
break;
}
if(N==2){
Ans[i]=(long long )C[2]%1000000007;
break;
}
for(j=3;j<=N;j++){
C[j]=C[j-1]-C[j-2];
}
Ans[i]=(long long )C[N]%1000000007;
}
for(j=0;j<T;j++){
cout<<Ans[j]<<endl;
}
return 0;
}
