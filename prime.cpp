#include <iostream>
#include<cmath>
#include<cstdio>
using namespace std;
bool prime(int n){
    int i;
    if(n==1){
        return false;
    }
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
int n=12,a,b;
cin>>a>>b;
for(int i=a;i<=b;i++){
if(prime(i)){
cout<<i<<" ";
}
}
return 0;
}
