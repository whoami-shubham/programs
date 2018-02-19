#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;
void st_comb(int min,int max,string st);
void help();
int main(){
int a,b;
string str;
string str2;
getline(cin,str2);
if(str2=="crunch"){
cin>>a>>b;
cin>>str;
st_comb(a,b,str);
}
else if(str2=="crunch --h"){
help();
}
else{
cout<<"command not found\n";
exit(0);
}
return 0;
}
void st_comb(int min,int max,string st){
string comb="",cur="";
int i,k,j=0,n=st.length();

int min_N=0,max_N=0;
vector<string>v;


if(min!=1){
for(i=min;i<=max;i++){
max_N=max_N+pow(st.length(),i);
}
for(i=2;i<=min-1;i++){
min_N=min_N+pow(st.length(),i);
}
for(i=0;i<n;i++){
v.push_back(comb+st[i]);
}

for(i=1;i<min_N+1;i++){
v.push_back(v[j]+v[(i-1)%(n)]);
if(i!=0 && (i%st.length()==0)){
j=j+1;
}
}

for(k=1;k<max_N+1;k++){
cur=v[j]+v[(k-1)%(n)];
cout<<cur<<"\n";
v.push_back(cur);
if(k!=0 && (k%st.length()==0)){
j=j+1;
}

}
cout<<"total "<<v.size()<<" combinations \n";

}
else{
for(i=2;i<=max;i++){
max_N=max_N+pow(st.length(),i);
}
for(k=0;k<n;k++){
cout<<comb+st[k]<<"\n";
v.push_back(comb+st[k]);
}

for(i=1;i<max_N+1;i++)
{
cur=v[j]+v[(i-1)%(n)];

cout<<cur<<"\n";
v.push_back(cur);
if(i>0 && (i%(k)==0)){
j=j+1;
}
}
cout<<"total "<<v.size()<<" combinations \n";
}
}
void help(){
cout<<"Crunch can create a wordlist based on criteria you specify. \n";
cout<<"Usage:\n crunch \n <min> <max> character_lists \n";
cout<<"where min and max are numbers\n";
}

