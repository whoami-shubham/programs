#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
string s,t,ans="0";
int i,j,temp;
for(i=a;i<=b;i++){
 for(j=a;j<=b;j++){
 temp=i*j;
  s = to_string(temp);
  t=s;
  reverse(s.begin(),s.end());
  if(s==t){
   if(i*j>atoi(ans.c_str())){
   ans=s;
   }

 }
}
}
cout<<ans<<"\n";
return 0;
}
