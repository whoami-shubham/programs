#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
long long i,j,ans,count=0;
cin>>n;
j=n;
while(1){
count=0;
for(i=1;i<=n;i++){
if(j%i==0){
count++;
}
else{
break;
}
}
if(count==n){
cout<<j<<"\n";
break;
}
j++;
if(j==9223372036854775807){
break;
}
}




return 0;
}
