#include<iostream>
#include<vector>
using namespace std;
int main(){
int i,xor1=0,xor2=1,s,val;
vector<int>A;
cin>>s;
for(int j=0;j<s;j++){
cin>>val;
A.push_back(val);
}
    for(i=1;i<A.size();i++)
    {
        xor1^=A[i];
        xor1^=i;
    }
    xor1^=A[0];
    /*int n=A.size();
    for(i=2;i<=(n-1);i++)
    {
        xor2^=i;
    }
    
    int repeat;
    repeat=xor1^xor2;*/
    
    cout<<xor1;
return 0;
}

