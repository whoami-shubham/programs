/* i uesd variable 'a' to keep track of starting index of string 
 * k is used for size of string
 *
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
string v="";
vector<string>ans;
string s;
cin>>s;
int i=0,j=0,k=1,a=0;
while((k<=s.length())){
while(i<=j){
v = v + s[i];
i++;
}
a++;
if(j<i){
ans.push_back(v);
v="";
if(j<s.length()-1){
if(k==1){
j=i;
}
else{
i=a;
j=j+1;
}
}
else{
k=k+1;
i=0;
j=k-1;
a=0;
}
}
//cout<<"i = "<<i<<" j = "<<j<<" k = "<<k<<endl;
}

for(i=0;i<ans.size();i++){
cout<<ans[i]<<"\n";

}
return 0;
}
