#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a,int b){
    int c;
    while(b){
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}
int cpFact(int A, int B) {
    int i,num=0;
    if(gcd(A,B)==1){
        return A;
    }
    for(i=1;i<=sqrt(A);i++){
        if(A%i==0 ){
            if(A/i>i&& A/i>num && gcd(A/i,B)==1){
                num=A/i;
            }
            else{
                if(gcd(i,B)==1 && i>num){
                    num=i;
                }
            }
            
        }
        
    }
    return num;
}
int main(){
int a,b;
cout<< " a , b ";
cin>>a>>b;
cout<<cpFact(a,b);
cout<<"\n";

    return 0;
}
